// export 
// let cpp file use verilog-based function (task)

module our;
    export "DPI-C" task publicSetBool;
    logic [3:0] var_bool; 

    task publicSetBool;
        input int in_bool;
        begin
            var_bool = in_bool[3:0];
            $display("C++ called me! var_bool is now: %b", var_bool);
        end
    endtask


endmodule
