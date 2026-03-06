// methology for designing interface algorithm:
// encode and check code
// buffer
// queue (fifo)
// pointer to fifo
// status for fifo

// module ps2_keyboard(
//     input clk, 
//     input clrn,   // enable
//     input ps2_clk,  
//     input ps2_data,
//     input nextdata_n,    // 
//     output [7:0] data,
//     output reg ready,    // the fifo is not empty
//     output reg overflow    // the fifo is overflow
// );
//     reg [3:0] ps2_clk_sync;
//     reg [7:0] fifo[7:0];    // circular queue with two pointers
//     reg [9:0] buffer;
//     reg [2:0] w_prt, r_ptr;
//     reg [3:0] count;    // the received data amount in the buffer

//     // record the ps2_clk, in order to capture the falling edge
//     always @(posedge clk) begin
//         ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk};
//     end
//     // capture the falling edge of ps2_clk
//     wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

//     // send and hold logic
//     always @(posedge clk) begin
//         if(clrn) begin    // we only need to reset write pointer & read pointer to 0, do not have to reset buffer and FIFO
//             count <= 0;
//             w_ptr <= 0;
//             r_ptr <= 0;
//             ready <= 0;
//             overflow <= 0;
//         end
//         else begin
//             if(ready) begin
//                 if(nextdata_n == 0) begin
//                     r_ptr <= r_ptr + 3'b001;
//                     ready <= (r_ptr + 1 == w_ptr);
//                 end
//             end
//             if(sampling) begin
//                 if(count == 4'd10) begin
//                     if(buffer[0] == 0 && (ps2_data) && ^buffer[9:1]) begin  // ^buffer[9:1] used for parity check 
//                         fifo[w_ptr] <= buffer[8:1];
//                         w_ptr <= w_ptr + 3'b001;
//                         ready <= 1'b1;                                // update ready
//                         overflow <= overflow | (r_ptr == w_ptr + 1);  // update overflow
//                     end  
//                     count <= 0;
//                 end
//                 else begin
//                     buffer[count] <= ps2_data;
//                     count <= count + 1;
//                 end
//             end
//         end
//     end

//     assign data <= fifo[r_ptr];

// endmodule



module ps2_keyboard(clk,clrn,ps2_clk,ps2_data,data,
                    ready,nextdata_n,overflow);
    input clk,clrn,ps2_clk,ps2_data;
    input nextdata_n;
    output [7:0] data;
    output reg ready;
    output reg overflow;     // fifo overflow
    // internal signal, for test
    reg [9:0] buffer;        // ps2_data bits
    reg [7:0] fifo[7:0];     // data fifo
    reg [2:0] w_ptr,r_ptr;   // fifo write and read pointers   
    reg [3:0] count;  // count ps2_data bits
    // detect falling edge of ps2_clk
    reg [2:0] ps2_clk_sync;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (clrn == 0) begin // reset
            count <= 0; w_ptr <= 0; r_ptr <= 0; overflow <= 0; ready<= 0;
        end
        else begin
            if ( ready ) begin // read to output next data
                if(nextdata_n == 1'b0) //read next data
                begin
                    r_ptr <= r_ptr + 3'b1;
                    if(w_ptr==(r_ptr+1'b1)) //empty
                        ready <= 1'b0;
                end
            end
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    fifo[w_ptr] <= buffer[8:1];  // kbd scan code
                    w_ptr <= w_ptr+3'b1;
                    ready <= 1'b1;
                    overflow <= overflow | (r_ptr == (w_ptr + 3'b1));
                end
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end
    assign data = fifo[r_ptr]; //always set output data

endmodule

