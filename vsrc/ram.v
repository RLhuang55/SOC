`include "defines.v"

module ram  
    (
        input wire clk_i,
        input wire rst_i,

        input wire we_i,
        input wire[`ADDR_WIDTH-1:0] addr_i,
        input reg[`DATA_WIDTH-1:0] data_i,
        output reg[`DATA_WIDTH-1:0] data_o
    );

    reg[`DATA_WIDTH-1:0] mem[0:`RAM_SIZE-1];

    //write
    always @(posedge clk_i) begin
        if (we_i == `WRITE_ENABLE && rst_i==1'b0) begin
            mem[addr_i[`RAM_ADDR_WIDTH+1:2]] <= data_i;
           // dataReady_o <= 1'b0;
        end 
    end    

    //read
    always @(*)
        if (rst_i == 1'b1) begin
            data_o = `ZERO;
        end else begin
            //dataReady_o = 1'b1;
            data_o = mem[addr_i[`RAM_ADDR_WIDTH+1:2]];
        end//if

endmodule