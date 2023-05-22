module exe_type_b_j(
    input wire rst_i,
    input wire[`DATA_WIDTH-1:0] inst_i,
    input wire[`ADDR_WIDTH-1:0] inst_addr_i,
    
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    output reg[`ADDR_WIDTH-1:0] jump_addr_o,
    output reg jump_enable_o
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire op1_eq_op2;
    assign op1_eq_op2 = (op1_i == op2_i);

    wire[`ADDR_WIDTH-1:0] pc;
    assign pc = inst_addr_i;
    

    always @(*) begin
        case(opcode) 
        `INST_TYPE_B: begin
            case(funct3)
            `INST_BNE:begin
                jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                jump_enable_o = (~op1_eq_op2);
            end
            `INST_BEQ:begin
                jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                jump_enable_o = op1_eq_op2;
            end
            `INST_BLT:begin
                jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                if($signed(op1_i) < $signed(op2_i))
                    jump_enable_o = 1'b1;
                else
                    jump_enable_o = 1'b0;
            end
            `INST_BGE:begin
                jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                if($signed(op1_i) >= $signed(op2_i))
                    jump_enable_o = 1'b1;
                else
                    jump_enable_o = 1'b0;
            end
            `INST_BLTU:begin
                jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                if($unsigned(op1_i) < $unsigned(op2_i))
                    jump_enable_o = 1'b1;
                else
                    jump_enable_o = 1'b0;
            end
            `INST_BGEU:begin
                jump_addr_o = pc + {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
                if($unsigned(op1_i) >= $unsigned(op2_i))
                    jump_enable_o = 1'b1;
                else
                    jump_enable_o = 1'b0;
            end
            default:begin
                jump_addr_o = `ZERO;
                jump_enable_o = 1'b0;
            end
            endcase
        end
        `INST_TYPE_JAL: begin
            jump_addr_o = pc + op2_i;
            jump_enable_o = 1'b1;
        end
        `INST_TYPE_JALR: begin
            jump_addr_o = op1_i + op2_i;
            jump_enable_o = 1'b1;
        end
        default: begin
            jump_addr_o = `ZERO;
            jump_enable_o = 1'b0;
        end
        endcase
    end //always
endmodule