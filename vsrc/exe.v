`include "defines.v"

module exe(
    input wire rst_i,

    //from id_exe
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire reg_we_i,
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    //mem output
    output reg mem_we_o,
    output reg[`ADDR_WIDTH-1:0] mem_addr_o,
    output reg[`DATA_WIDTH-1:0] mem_data_o,
    output reg[3:0] mem_op_o, //LB,LH,LW,LBU, LHU, SB, SH, SW
    //to exe_mem
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
    wire[4:0] shamt = inst_i[24:20];
    reg[`RDATA_WIDTH-1:0] r_reg_wdata_o;
    reg[`RDATA_WIDTH-1:0] s_l_reg_wdata_o;
    reg r_reg_we_o;
    reg s_l_reg_we_o;

    exe_type_r exe_type_r0(
        .rst_i(rst_i),
        .inst_i(inst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .reg_wdata_o(r_reg_wdata_o),
        .reg_we_o(r_reg_we_o)
     );

    exe_type_s_l exe_type_s_l0(
        .rst_i(rst_i),
        .inst_i(inst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .reg_wdata_o(s_l_reg_wdata_o),
        .reg_we_o(s_l_reg_we_o),
        .mem_addr_o(mem_addr_o),
        .mem_data_o(mem_data_o),
        .mem_we_o(mem_we_o),
        .mem_op_o(mem_op_o)
     );

    always @(*) begin
        if (rst_i == 1) begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
            mem_addr_o = `ZERO_REG;
            mem_data_o = `ZERO;
            mem_we_o = `WRITE_DISABLE;
            mem_op_o = `MEM_OP_NONE;
        end else begin
            reg_we_o = reg_we_i;
            case (opcode)
                `INST_TYPE_I:begin
                    case(funct3)
                        `INST_ORI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i | op2_i;
                        end//ORI
                        `INST_ADDI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i + op2_i;
                        end
                        `INST_XORI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i ^ op2_i;
                        end
                        `INST_ANDI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i & op2_i;
                        end
                        `INST_SLTI: begin
                            reg_waddr_o = reg_waddr_i;
                            if( op1_i < op2_i)
                                reg_wdata_o = 1;
                            else
                                reg_wdata_o = 0;
                        end
                        `INST_SLTIU: begin
                            reg_waddr_o = reg_waddr_i;
                            if( op1_i < op2_i)
                                reg_wdata_o = 1;
                            else
                                reg_wdata_o = 0;
                        end
                        `INST_SLLI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i << shamt;
                        end
                        `INST_SRLSRAI: begin
                            reg_waddr_o = reg_waddr_i;
                            if(funct7 == `INST_SRLI_F)
                                reg_wdata_o = op1_i >> shamt;
                            else if(funct7 == `INST_SRAI_F)                 
                                reg_wdata_o = $signed(op1_i) >> shamt;

                        end
                        default: begin
                            reg_waddr_o = `ZERO_REG;
                            reg_wdata_o = `ZERO;
                            reg_we_o = `WRITE_DISABLE;
                        end//default
                    endcase
                end
                `INST_TYPE_R_M:begin //Type_r and M
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = r_reg_wdata_o;
                    reg_we_o = r_reg_we_o;
                end
                `INST_TYPE_LUI, `INST_TYPE_AUIPC:begin //type u
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = op1_i+op2_i;
                    reg_we_o = reg_we_i;
                end
                `INST_TYPE_S, `INST_TYPE_L:begin //type s and l
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = s_l_reg_wdata_o;
                    reg_we_o = s_l_reg_we_o;
                end
                default:begin
                        reg_waddr_o = `ZERO_REG;
                        reg_wdata_o = `ZERO;
                        reg_we_o = `WRITE_DISABLE;
                        mem_addr_o = `ZERO_REG;
                        mem_data_o = `ZERO;
                        mem_we_o = `WRITE_DISABLE;
                        mem_op_o = `MEM_OP_NONE;
                end
            endcase
        end //if
        
    end //always

endmodule