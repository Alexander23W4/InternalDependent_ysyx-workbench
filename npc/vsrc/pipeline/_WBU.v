
/*
仅非(b和s)指令进入本级

lsu->l    exu->...
本级可以接收 exu & lsu 的信号

WBU: 写回, 冲刷 
TOP: 清理

单个情况:                      
ll两个不同rd:          
ll两个相同rd:  

le两个相同rd,l先来: 


le两个相同rd,e先来: 
le两个相同rd,l先来: 

le两个相同rd,e先来: 

le两个不同rd,l先来: 
le两个不同rd,e先来: 
le两个不同rd,l先来: 
le两个不同rd,e先来: 

遍历wb_q -> 找到n的同时记录相同rd

*/

module ysyx_26040135_WBU(
    input clock,
    input reset, 

    input in_valid_exu,
    output in_ready_exu,

    input [4:0] rd_exu,
    input [31:0] wdata_exu,

    input in_valid_lsu,
    output in_ready_lsu,

    input [4:0] rd_lsu,
    input [31:0] wdata_lsu,

    input [3:0][5:0] wb_q,

    output reg wen,
    output reg [31:0] wdata,
    output reg [4:0] rd,

    output reg [63:0] wbu_blockf_cyc,
    output reg [63:0] wbu_work_cyc,

    output reg wbu_blockf,

    // 冲刷 (⭐值得优化, 很少出现的情况, 但是要跨级控制)
    output reg lsu_flush,
    output reg exu_flush,

    output reg [3:0][5:0] wb_q_update
);
// 两个同时来, 先处理l

    reg in_ready;
    assign in_ready_exu = in_ready;
    assign in_ready_lsu = in_ready;

    reg wb_type;  // 0 -> exu  1 -> lsu

// state: IDLE  WB
    localparam IDLE = 1'b0, WB = 1'b1;
    reg state, next;
    

    always @(posedge clock or posedge reset) begin
        if(reset) begin
            in_ready <= 1'b1;
            state <= IDLE;
            rd <= 5'b0;
            wdata <= 31'b0;
            wb_type <= 1'b0;

            wbu_blockf_cyc <= 0;
            wbu_work_cyc <= 0;
            wbu_blockf <= 0;
            wb_q_update <= 0;

        end else begin   // 优先级 lsu > exu
            state <= next;
            if(state == IDLE && in_ready && in_valid_lsu) begin
                in_ready <= 1'b0;
                rd <= rd_lsu;
                wdata <= wdata_lsu;
                wb_type <= 1'b1;  // ls
            end
            else if(state == IDLE && in_ready && in_valid_exu) begin
                in_ready <= 1'b0;
                rd <= rd_exu;
                wdata <= wdata_exu;
                wb_type <= 1'b0;  // ex
            end

            if(in_ready && !in_valid_exu && !in_valid_lsu) begin
                wbu_blockf_cyc <= wbu_blockf_cyc + 64'b1;
                wbu_blockf <= 1'b1;
            end else begin
                wbu_blockf <= 1'b0;
            end

            // if(state == IDLE && next == WB) begin
            //     wb_q_update <= 
            // end
            
            if(state == WB) begin
                wbu_work_cyc <= wbu_work_cyc + 64'b1;
                in_ready <= 1'b1;
            end
        end
    end

    always @(*) begin
        
        next = state;
        wen = 1'b0;
        case (state)
            IDLE: begin
                if((in_ready && in_valid_lsu) || (in_ready && in_valid_exu)) begin
                    next = WB;
                end
            end
            WB: begin    // 这里操作 wb_q_update的时候, 直接接受来自exu的信号
                         // exu有rd要写入时, 判断信号wen, 如果wen就交给wbu来操作, !wen就交给TOP来处理, 总之依然是TOP控制wb_q
                wen = 1'b1;
                wb_q_update = new_wb_q(wb_q, wb_type);

                next = IDLE;
            end
        endcase
    end

endmodule



function automatic [23:0] wb_q_enqueue;
    input [5:0] new_data;
    input [23:0] queue;

    reg [23:0] result;
    reg found;
    integer i;

    begin
        result = queue;
        found = 1'b0;

        for (i = 0; i < 4; i = i + 1) begin
            if (!found && (queue[i] == 6'b0)) begin
                result[i*6 +: 6] = new_data;
                found = 1'b1;
            end
        end

        wb_q_enqueue = result;
    end
endfunction


// 遍历wb_q, 将这个rd之前的所有相同rd的待wb记录都删掉
function automatic [25:0] new_wb_q;   // [25] flush_type -- 11(ls) 10(ex) 00(无) [23:0] new_wq
    input [3:0][5:0] wb_q;
    input wb_type;

    reg found_target;
    reg [23:0] result;
    reg [1:0] flush_type;

    begin
        found_target = 1'b0;
        result = 0;
        flush_type = 2'b00;

        for (int i = 0; i < 4; i++) begin

            if(wb_q[i][4:0] != rd) begin    // 不同rd, 无论如何照常写入
                result = wb_q_enqueue(result, wb_q[i]);

            end else begin   // 相同rd
                if(!found_target) begin
                    if(wb_q[i][5] == wb_type) begin  // 找到第一个对应的作为目标
                        found_target = 1'b1;        

                    end else begin        // 不是目标, 但是是同一个rd
                        flush_type = wb_type ? 2'b10 : 2'b11;    // 和 wb_type是反过来的, wb_type写回的是ls, flush的就是ex
                    end
                end else begin
                    result = wb_q_enqueue(result, wb_q[i]);
                end
            end
        end
        new_wb_q = {flush_type, result};
    end

endfunction
