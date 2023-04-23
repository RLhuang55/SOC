`include "defines.v"

module exe_type_r(
    input wire rst_i,
    
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    input reg[`RDATA_WIDTH-1:0] reg_waddr_i,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    output reg reg_we_o
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
    
    wire isType_r;
    assign isType_r = (opcode == `INST_TYPE_R_M) && ((funct7 == 7'b0000000 || funct7 == 7'b0100000));
    
    always @(*) begin
        
        if (rst_i == 1 || isType_r == 0) begin
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
        end else begin
                case(funct3)
                    `INST_OR: begin
                        reg_wdata_o = op1_i | op2_i;
                        reg_we_o = `WRITE_ENABLE;
                    end//ORI
                    `INST_ADD: begin      
                        if(funct7 == 7'b0)                      
                            reg_wdata_o = op1_i + op2_i;
                        else
                            reg_wdata_o = op1_i - op2_i;
                        reg_we_o = `WRITE_ENABLE;
                    end
                    `INST_SLL: begin                            
                        reg_wdata_o = op1_i << op2_i;
                        reg_we_o = `WRITE_ENABLE;
                    end
                    `INST_SLT: begin
                        if(op1_i < $signed(op2_i))
                            reg_wdata_o = 1;
                        else
                            reg_wdata_o = 0;
                        reg_we_o = `WRITE_ENABLE;
                    end
                    `INST_SLTIU: begin
                        if(op1_i < $unsigned(op2_i))
                            reg_wdata_o = 1;
                        else
                            reg_wdata_o = 0;
                        reg_we_o = `WRITE_ENABLE;
                    end
                    `INST_XOR: begin                            
                        reg_wdata_o = op1_i ^ op2_i;
                        reg_we_o = `WRITE_ENABLE;
                    end
                    `INST_SR: begin           
                        if(funct7== 7'b0)                 
                            reg_wdata_o = op1_i >> $unsigned(op2_i);
                        else
                            reg_wdata_o = op1_i >> $signed(op2_i);
                        reg_we_o = `WRITE_ENABLE;
                    end
                    `INST_AND: begin                            
                        reg_wdata_o = op1_i & op2_i;
                        reg_we_o = `WRITE_ENABLE;
                    end
                    default: begin
                        reg_wdata_o = `ZERO;
                        reg_we_o = `WRITE_DISABLE;
                    end//default
                endcase
        end //if
    end //always
endmodule
