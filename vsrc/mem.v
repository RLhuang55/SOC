`include "defines.v"

module mem(
    input wire rst_i,
    input wire clk_i,
    //from exe_mem
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire reg_we_i,
    input wire[`RDATA_WIDTH-1:0] reg_wdata_i,
    //from ram
    input wire[`DATA_WIDTH-1:0] ram_data_i,
    // from exe.v, exe_mem.v, mem.v 需要的連線
    input wire mem_we_i,
    input wire[`ADDR_WIDTH-1:0] mem_addr_i,
    input wire[`DATA_WIDTH-1:0] mem_data_i,
    input wire[3:0] mem_op_i,  //LB,LH,LW,LBU, LHU, SB, SH, SW, NONE
    //to ram
    output reg[`ADDR_WIDTH-1:0] ram_addr_o,
    output reg ram_w_request_o,
    output reg[`DATA_WIDTH-1:0] ram_data_o,
    //to mem_wb
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    output reg halt_o
);
    wire[1:0] ram_addr_offset;
    assign ram_addr_offset = mem_addr_i[1:0] & 2'b11;
    always @(posedge clk_i) begin
        //for isa test
        if (mem_op_i==`SW && mem_addr_i == `HALT_ADDR)
            halt_o <= 1'b1;
        else
            halt_o <= halt_o;
    end
    always @(*) begin
        if (rst_i == 1'b1) begin
            reg_waddr_o = `ZERO_REG;
            reg_we_o = `WRITE_ENABLE;
            reg_wdata_o = `ZERO;
            ram_addr_o = `ZERO;
            ram_data_o = `ZERO;
            ram_w_request_o = `WRITE_DISABLE;
        end else begin
            reg_waddr_o = reg_waddr_i; 
            reg_we_o = reg_we_i;//L能寫入 S不能寫入
            ram_w_request_o = mem_we_i;//S能寫入 L不能寫入
            ram_addr_o = mem_addr_i;
            case(mem_op_i)   //先不考慮 ram 讀取需要幾個 cycle
                `LB: begin
                    case(ram_addr_offset)
                    2'b00:begin
                        reg_wdata_o = {{24{ram_data_i[7]}}, ram_data_i[7:0]};
                    end
                    2'b01:begin
                        reg_wdata_o = {{24{ram_data_i[15]}}, ram_data_i[15:8]};
                    end
                    2'b10:begin
                        reg_wdata_o = {{24{ram_data_i[23]}}, ram_data_i[23:16]};
                    end
                    default:begin
                        reg_wdata_o = {{24{ram_data_i[31]}}, ram_data_i[31:24]};
                    end
                    endcase      
                end
                `LBU: begin
                    case(ram_addr_offset)
                    2'b00:begin
                        reg_wdata_o = {{24{1'b0}}, ram_data_i[7:0]};
                    end
                    2'b01:begin
                        reg_wdata_o = {{24{1'b0}}, ram_data_i[15:8]};
                    end
                    2'b10:begin
                        reg_wdata_o = {{24{1'b0}}, ram_data_i[23:16]};
                    end
                    default:begin
                        reg_wdata_o = {{24{1'b0}}, ram_data_i[31:24]};
                    end
                    endcase      
                end
                `LH: begin
                    case(ram_addr_offset)
                    2'b00:begin
                        reg_wdata_o = {{16{ram_data_i[15]}}, ram_data_i[15:0]};
                    end
                    default:begin
                        reg_wdata_o = {{16{ram_data_i[31]}}, ram_data_i[31:16]};
                    end
                    endcase      
                end
                `LHU: begin
                    case(ram_addr_offset)
                    2'b00:begin
                        reg_wdata_o = {{16{1'b0}}, ram_data_i[15:0]};
                    end
                    default:begin
                        reg_wdata_o = {{16{1'b0}}, ram_data_i[31:16]};
                    end
                    endcase      
                end
                `LW: begin
                    reg_wdata_o = ram_data_i;     
                end
                `SB: begin
                    case (ram_addr_offset)
                    2'b00: begin
                        ram_data_o = {ram_data_i[31:8],mem_data_i[7:0]};
                    end
                    2'b01: begin
                        ram_data_o = {ram_data_i[31:16],mem_data_i[7:0], ram_data_i[7:0]};
                    end
                    2'b10:begin
                        ram_data_o = {ram_data_i[31:24],mem_data_i[7:0], ram_data_i[15:0]};
                    end
                    default:begin
                        ram_data_o = {mem_data_i[7:0], ram_data_i[23:0]};
                    end
                    endcase
                end
                `SH: begin
                    case (ram_addr_offset)
                    2'b00: begin
                        ram_data_o = {ram_data_i[31:16],mem_data_i[15:0]};
                    end
                    default:begin
                        ram_data_o = {mem_data_i[15:0], ram_data_i[15:0]};
                    end
                    endcase
                end
                `SW: begin
                    ram_data_o = mem_data_i;
                end
                default: begin
                    reg_wdata_o = reg_wdata_i;
                    ram_addr_o = `ZERO;
                    ram_data_o = `ZERO;
                    ram_w_request_o = `WRITE_DISABLE;
                end
            endcase
        end //if
    end //always
endmodule