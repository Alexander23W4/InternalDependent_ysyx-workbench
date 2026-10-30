
/*
仅非(b和s)指令进入本级

lsu->l    exu->...
本级可以接收 exu & lsu 的信号

首先就现在这个设计, 最多会有2个在途 rd 



单个情况: (iag0 = 1, iag1 = 1) 清掉iag0, wb                         跳比
ll两个不同rd: (iag0 = 1, iag1 = 1) 清掉iag0, wb                     跳比
ll两个相同rd: (iag0 = 1, iag1 = 2) iag1 - 1, 不wb                   跳比
le两个相同rd,l先来: (iag0 = 1, iag1 = 2, iag2 = e) iag1 - 1, 不wb    跳比
le两个相同rd,e先来: (iag0 = 1, iag1 = 2, iag2 = e) 清掉iag0, wb      跳2次, 比
le两个相同rd,l先来: (iag0 = 1, iag1 = 2, iag2 = l) 清掉iag0, wb      跳2次, 比
le两个相同rd,e先来: (iag0 = 1, iag1 = 2, iag2 = l) iag1 - 1, 不wb    跳比
le两个不同rd,l先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb                iag2 = e 跳比    
le两个不同rd,e先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb                iag2 = l 跳比    
le两个不同rd,l先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb                iag2 = l 跳一次 这次不比
le两个不同rd,e先来: (iag0 = 1, iag1 = 1) 清掉iag0, wb                iag2 = e 跳一次 这次不比
l/e来了之后: (iag0 = 0) 不wb                                        不跳, 不比          


*/


`ifndef WB_Q_LEN
`define WB_Q_LEN 3
`endif

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

    input [`WB_Q_LEN-1:0][5:0] wb_q,   // top
    input exu_new_wbt,    // exu has new wb task
    input [5:0] exu_new_wbd,   // exu new wb data

    output reg wen,   // -> top 
    output reg [31:0] wdata,
    output reg [4:0] rd,

    output reg [63:0] wbu_blockf_cyc,
    output reg [63:0] wbu_work_cyc,

    output reg wbu_blockf,

    // 冲刷 (⭐值得优化, 很少出现的情况, 但是要跨级控制)

    output reg [`WB_Q_LEN-1:0][5:0] wb_q_update,  // -> top
    output flush,  // 

    output reg compare,
    output reg [1:0] jump
);

function automatic [`WB_Q_LEN*6-1:0] wb_q_enqueue;
    input [5:0] new_data;
    input [`WB_Q_LEN*6-1:0] queue;

    reg [`WB_Q_LEN*6-1:0] result;
    reg found;
    integer i;

    begin
        result = queue;
        found = 1'b0;

        for (i = 0; i < `WB_Q_LEN; i = i + 1) begin
            if (!found && (queue[i] == 6'b0)) begin
                result[i*6 +: 6] = new_data;
                found = 1'b1;
            end
        end

        wb_q_enqueue = result;
    end
endfunction
function automatic [`WB_Q_LEN*6 + 1:0] new_wb_q;   // [24] flush  [`WB_Q_LEN*6-1:0] new_wq
    input [`WB_Q_LEN-1:0][5:0] wb_q;
    input wb_type;
    input exu_new_wbt;
    input [5:0] exu_new_wbd;

    reg found_target;
    reg [`WB_Q_LEN*6-1:0] result;
    reg flush;
    reg the_first;

    begin
        found_target = 1'b0;
        result = 0;
        flush = 1'b0;
        the_first = 1'b0;
        compare = 1'b0;
        jump = 2'b00;

        for (int i = 0; i < `WB_Q_LEN; i++) begin

            if(wb_q[i][4:0] != rd) begin    // 不同rd, 无论如何照常写入
                result = wb_q_enqueue(result, wb_q[i]);

            end else begin   // 相同rd
                if(!found_target) begin
                    if(wb_q[i][5] == wb_type) begin  // 找到第一个对应的作为目标
                        found_target = 1'b1;        
                        the_first = (i == 0);
                    end else begin        // 不是目标, 但是是同一个rd
                        flush = 1'b1;
                    end
                end else begin
                    result = wb_q_enqueue(result, wb_q[i]);
                end
            end
        end

        if(exu_new_wbt) begin
            result = wb_q_enqueue(result, exu_new_wbd);
        end

        new_wb_q = {the_first, flush, result};
    end

endfunction
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

            
            if(state == WB) begin
                wbu_work_cyc <= wbu_work_cyc + 64'b1;
                in_ready <= 1'b1;
            end
        end
    end

    reg the_first;

    always @(*) begin
        
        next = state;
        wen = 1'b0;
        flush = 1'b0;
        wb_q_update = 0;
        the_first = 0;

        case (state)
            IDLE: begin
                if((in_ready && in_valid_lsu) || (in_ready && in_valid_exu)) begin
                    next = WB;
                end
            end
            WB: begin    // 这里操作 wb_q_update的时候, 直接接受来自exu的信号
                         // exu有rd要写入时, 判断信号wen, 如果wen就交给wbu来操作, !wen就交给TOP来处理, 总之依然是TOP控制wb_q
                wen = 1'b1;
                {the_first, flush, wb_q_update} = new_wb_q(wb_q, wb_type, exu_new_wbt, exu_new_wbd);    // TOP根据wen信号来更新wb
                jump = flush ? 2'b10 : 2'b01;
                compare = (!the_first && !flush);
                next = IDLE;
            end
        endcase
    end





// 遍历wb_q, 将这个rd之前的所有相同rd的待wb记录都删掉

endmodule


