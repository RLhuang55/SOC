// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


//======================

void Vtest_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtest_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtest_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtest_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtest_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+129,"rst_i", false,-1);
        tracep->declBit(c+130,"clk_i", false,-1);
        tracep->declBit(c+129,"test_top rst_i", false,-1);
        tracep->declBit(c+130,"test_top clk_i", false,-1);
        tracep->declBus(c+2,"test_top pc_wire", false,-1, 31,0);
        tracep->declBit(c+3,"test_top ce_wire", false,-1);
        tracep->declBus(c+84,"test_top ctrl_stall_o", false,-1, 5,0);
        tracep->declBit(c+85,"test_top ctrl_flush_jump_o", false,-1);
        tracep->declBus(c+86,"test_top ctrl_new_pc_o", false,-1, 31,0);
        tracep->declBus(c+2,"test_top if_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+131,"test_top if_inst_o", false,-1, 31,0);
        tracep->declBus(c+4,"test_top if_id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+5,"test_top if_id_inst_o", false,-1, 31,0);
        tracep->declBus(c+87,"test_top id_inst_o", false,-1, 31,0);
        tracep->declBus(c+88,"test_top id_inst_addr_o", false,-1, 4,0);
        tracep->declBus(c+89,"test_top id_op1_o", false,-1, 31,0);
        tracep->declBus(c+90,"test_top id_op2_o", false,-1, 31,0);
        tracep->declBit(c+91,"test_top id_reg_we_o", false,-1);
        tracep->declBit(c+6,"test_top id_stallreq_o", false,-1);
        tracep->declBus(c+92,"test_top id_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+93,"test_top id_reg1_addr_o", false,-1, 4,0);
        tracep->declBus(c+94,"test_top id_reg2_addr_o", false,-1, 4,0);
        tracep->declBit(c+95,"test_top id_reg1_re_o", false,-1);
        tracep->declBit(c+96,"test_top id_reg2_re_o", false,-1);
        tracep->declBus(c+97,"test_top reg1_data_o", false,-1, 31,0);
        tracep->declBus(c+98,"test_top reg2_data_o", false,-1, 31,0);
        tracep->declBus(c+7,"test_top id_exe_op1_o", false,-1, 31,0);
        tracep->declBus(c+8,"test_top id_exe_op2_o", false,-1, 31,0);
        tracep->declBit(c+9,"test_top id_exe_reg_we_o", false,-1);
        tracep->declBus(c+10,"test_top id_exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+11,"test_top id_exe_inst_o", false,-1, 31,0);
        tracep->declBus(c+12,"test_top id_exe_inst_addr_o", false,-1, 4,0);
        tracep->declBus(c+99,"test_top exe_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+100,"test_top exe_reg_we_o", false,-1);
        tracep->declBus(c+101,"test_top exe_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+132,"test_top exe_mem_we_o", false,-1);
        tracep->declBus(c+133,"test_top exe_mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+134,"test_top exe_mem_data_o", false,-1, 31,0);
        tracep->declBus(c+135,"test_top exe_mem_op_o", false,-1, 3,0);
        tracep->declBus(c+102,"test_top exe_jump_addr_o", false,-1, 4,0);
        tracep->declBit(c+85,"test_top exe_jump_enable_o", false,-1);
        tracep->declBit(c+140,"test_top exe_stallreq_o", false,-1);
        tracep->declBus(c+13,"test_top exe_mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+14,"test_top exe_mem_reg_we_o", false,-1);
        tracep->declBus(c+15,"test_top exe_mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+16,"test_top exe_mem_mem_we_o", false,-1);
        tracep->declBus(c+17,"test_top exe_mem_mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+18,"test_top exe_mem_mem_data_o", false,-1, 31,0);
        tracep->declBus(c+19,"test_top exe_mem_mem_op_o", false,-1, 3,0);
        tracep->declBus(c+103,"test_top mem_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+104,"test_top mem_reg_we_o", false,-1);
        tracep->declBus(c+105,"test_top mem_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+20,"test_top mem_wb_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+21,"test_top mem_wb_reg_we_o", false,-1);
        tracep->declBus(c+22,"test_top mem_wb_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+106,"test_top mem_ram_addr_o", false,-1, 31,0);
        tracep->declBit(c+107,"test_top mem_ram_w_request_o", false,-1);
        tracep->declBus(c+108,"test_top mem_ram_data_o", false,-1, 31,0);
        tracep->declBus(c+109,"test_top mem_ram_data_i", false,-1, 31,0);
        tracep->declBus(c+23,"test_top id_exe_rd_o", false,-1, 4,0);
        tracep->declBit(c+24,"test_top id_exe_inst_is_load_o", false,-1);
        tracep->declBit(c+130,"test_top pc_reg0 clk_i", false,-1);
        tracep->declBit(c+129,"test_top pc_reg0 rst_i", false,-1);
        tracep->declBus(c+84,"test_top pc_reg0 stall_i", false,-1, 5,0);
        tracep->declBit(c+85,"test_top pc_reg0 flush_jump_i", false,-1);
        tracep->declBus(c+86,"test_top pc_reg0 new_pc_i", false,-1, 31,0);
        tracep->declBus(c+2,"test_top pc_reg0 pc_o", false,-1, 31,0);
        tracep->declBit(c+3,"test_top pc_reg0 ce_o", false,-1);
        tracep->declBit(c+129,"test_top ctrl0 rst_i", false,-1);
        tracep->declBus(c+86,"test_top ctrl0 jump_addr_i", false,-1, 31,0);
        tracep->declBit(c+85,"test_top ctrl0 jump_enable_i", false,-1);
        tracep->declBit(c+6,"test_top ctrl0 stallreq_from_id_i", false,-1);
        tracep->declBit(c+140,"test_top ctrl0 stallreq_from_exe_i", false,-1);
        tracep->declBus(c+84,"test_top ctrl0 stall_o", false,-1, 5,0);
        tracep->declBit(c+85,"test_top ctrl0 flush_jump_o", false,-1);
        tracep->declBus(c+86,"test_top ctrl0 new_pc_o", false,-1, 31,0);
        tracep->declBit(c+130,"test_top if_id0 clk_i", false,-1);
        tracep->declBit(c+129,"test_top if_id0 rst_i", false,-1);
        tracep->declBus(c+2,"test_top if_id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+131,"test_top if_id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+84,"test_top if_id0 stall_i", false,-1, 5,0);
        tracep->declBit(c+85,"test_top if_id0 flush_jump_i", false,-1);
        tracep->declBus(c+4,"test_top if_id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+5,"test_top if_id0 inst_o", false,-1, 31,0);
        tracep->declBit(c+129,"test_top id0 rst_i", false,-1);
        tracep->declBus(c+4,"test_top id0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+5,"test_top id0 inst_i", false,-1, 31,0);
        tracep->declBus(c+97,"test_top id0 reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+98,"test_top id0 reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+99,"test_top id0 exe_reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+101,"test_top id0 exe_reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+100,"test_top id0 exe_reg_we_i", false,-1);
        tracep->declBus(c+103,"test_top id0 mem_reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+105,"test_top id0 mem_reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+104,"test_top id0 mem_reg_we_i", false,-1);
        tracep->declBus(c+23,"test_top id0 exe_rd_i", false,-1, 4,0);
        tracep->declBit(c+24,"test_top id0 pre_inst_is_load_i", false,-1);
        tracep->declBus(c+93,"test_top id0 reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+94,"test_top id0 reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+95,"test_top id0 reg1_re_o", false,-1);
        tracep->declBit(c+96,"test_top id0 reg2_re_o", false,-1);
        tracep->declBus(c+87,"test_top id0 inst_o", false,-1, 31,0);
        tracep->declBus(c+110,"test_top id0 inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+89,"test_top id0 op1_o", false,-1, 31,0);
        tracep->declBus(c+90,"test_top id0 op2_o", false,-1, 31,0);
        tracep->declBit(c+91,"test_top id0 reg_we_o", false,-1);
        tracep->declBus(c+92,"test_top id0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+6,"test_top id0 stallreq_o", false,-1);
        tracep->declBus(c+111,"test_top id0 op1_o_final", false,-1, 31,0);
        tracep->declBus(c+112,"test_top id0 op2_o_final", false,-1, 31,0);
        tracep->declBus(c+25,"test_top id0 opcode", false,-1, 6,0);
        tracep->declBus(c+113,"test_top id0 i_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+114,"test_top id0 i_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+115,"test_top id0 i_reg1_re_o", false,-1);
        tracep->declBit(c+116,"test_top id0 i_reg2_re_o", false,-1);
        tracep->declBus(c+117,"test_top id0 i_op1_o", false,-1, 31,0);
        tracep->declBus(c+118,"test_top id0 i_op2_o", false,-1, 31,0);
        tracep->declBit(c+119,"test_top id0 i_reg_we_o", false,-1);
        tracep->declBus(c+120,"test_top id0 i_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+26,"test_top id0 r_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+27,"test_top id0 r_reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+28,"test_top id0 r_reg1_re_o", false,-1);
        tracep->declBit(c+29,"test_top id0 r_reg2_re_o", false,-1);
        tracep->declBus(c+136,"test_top id0 r_op1_o", false,-1, 31,0);
        tracep->declBus(c+137,"test_top id0 r_op2_o", false,-1, 31,0);
        tracep->declBit(c+30,"test_top id0 r_reg_we_o", false,-1);
        tracep->declBus(c+31,"test_top id0 r_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+32,"test_top id0 rd", false,-1, 4,0);
        tracep->declBus(c+33,"test_top id0 rs1", false,-1, 4,0);
        tracep->declBus(c+34,"test_top id0 rs2", false,-1, 4,0);
        tracep->declBit(c+6,"test_top id0 is_load_hazard", false,-1);
        tracep->declBus(c+5,"test_top id0 inst_type_i inst_i", false,-1, 31,0);
        tracep->declBus(c+97,"test_top id0 inst_type_i reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+98,"test_top id0 inst_type_i reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+113,"test_top id0 inst_type_i reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+114,"test_top id0 inst_type_i reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+115,"test_top id0 inst_type_i reg1_re_o", false,-1);
        tracep->declBit(c+116,"test_top id0 inst_type_i reg2_re_o", false,-1);
        tracep->declBus(c+117,"test_top id0 inst_type_i op1_o", false,-1, 31,0);
        tracep->declBus(c+118,"test_top id0 inst_type_i op2_o", false,-1, 31,0);
        tracep->declBit(c+119,"test_top id0 inst_type_i reg_we_o", false,-1);
        tracep->declBus(c+120,"test_top id0 inst_type_i reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+35,"test_top id0 inst_type_i funct3", false,-1, 2,0);
        tracep->declBus(c+32,"test_top id0 inst_type_i rd", false,-1, 4,0);
        tracep->declBus(c+33,"test_top id0 inst_type_i rs1", false,-1, 4,0);
        tracep->declBus(c+34,"test_top id0 inst_type_i rs2", false,-1, 4,0);
        tracep->declBus(c+5,"test_top id0 inst_type_r inst_i", false,-1, 31,0);
        tracep->declBus(c+97,"test_top id0 inst_type_r reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+98,"test_top id0 inst_type_r reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+26,"test_top id0 inst_type_r reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+27,"test_top id0 inst_type_r reg2_raddr_o", false,-1, 4,0);
        tracep->declBit(c+28,"test_top id0 inst_type_r reg1_re_o", false,-1);
        tracep->declBit(c+29,"test_top id0 inst_type_r reg2_re_o", false,-1);
        tracep->declBus(c+136,"test_top id0 inst_type_r op1_o", false,-1, 31,0);
        tracep->declBus(c+137,"test_top id0 inst_type_r op2_o", false,-1, 31,0);
        tracep->declBit(c+30,"test_top id0 inst_type_r reg_we_o", false,-1);
        tracep->declBus(c+31,"test_top id0 inst_type_r reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+25,"test_top id0 inst_type_r opcode", false,-1, 6,0);
        tracep->declBus(c+35,"test_top id0 inst_type_r funct3", false,-1, 2,0);
        tracep->declBus(c+36,"test_top id0 inst_type_r funct7", false,-1, 6,0);
        tracep->declBus(c+34,"test_top id0 inst_type_r shamt", false,-1, 4,0);
        tracep->declBus(c+32,"test_top id0 inst_type_r rd", false,-1, 4,0);
        tracep->declBus(c+33,"test_top id0 inst_type_r rs1", false,-1, 4,0);
        tracep->declBus(c+34,"test_top id0 inst_type_r rs2", false,-1, 4,0);
        tracep->declBit(c+37,"test_top id0 inst_type_r isType_r", false,-1);
        tracep->declBit(c+129,"test_top id_exe0 rst_i", false,-1);
        tracep->declBit(c+130,"test_top id_exe0 clk_i", false,-1);
        tracep->declBus(c+89,"test_top id_exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+90,"test_top id_exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+91,"test_top id_exe0 reg_we_i", false,-1);
        tracep->declBus(c+92,"test_top id_exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+87,"test_top id_exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+88,"test_top id_exe0 inst_addr_i", false,-1, 4,0);
        tracep->declBus(c+84,"test_top id_exe0 stall_i", false,-1, 5,0);
        tracep->declBit(c+85,"test_top id_exe0 flush_jump_i", false,-1);
        tracep->declBit(c+24,"test_top id_exe0 inst_is_load_o", false,-1);
        tracep->declBus(c+23,"test_top id_exe0 rd_o", false,-1, 4,0);
        tracep->declBus(c+7,"test_top id_exe0 op1_o", false,-1, 31,0);
        tracep->declBus(c+8,"test_top id_exe0 op2_o", false,-1, 31,0);
        tracep->declBit(c+9,"test_top id_exe0 reg_we_o", false,-1);
        tracep->declBus(c+10,"test_top id_exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+11,"test_top id_exe0 inst_o", false,-1, 31,0);
        tracep->declBus(c+12,"test_top id_exe0 inst_addr_o", false,-1, 4,0);
        tracep->declBus(c+121,"test_top id_exe0 opcode", false,-1, 6,0);
        tracep->declBit(c+129,"test_top exe0 rst_i", false,-1);
        tracep->declBus(c+7,"test_top exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+8,"test_top exe0 op2_i", false,-1, 31,0);
        tracep->declBit(c+9,"test_top exe0 reg_we_i", false,-1);
        tracep->declBus(c+10,"test_top exe0 reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+11,"test_top exe0 inst_i", false,-1, 31,0);
        tracep->declBus(c+12,"test_top exe0 inst_addr_i", false,-1, 4,0);
        tracep->declBit(c+132,"test_top exe0 mem_we_o", false,-1);
        tracep->declBus(c+133,"test_top exe0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+134,"test_top exe0 mem_data_o", false,-1, 31,0);
        tracep->declBus(c+135,"test_top exe0 mem_op_o", false,-1, 3,0);
        tracep->declBus(c+99,"test_top exe0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+100,"test_top exe0 reg_we_o", false,-1);
        tracep->declBus(c+101,"test_top exe0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+122,"test_top exe0 jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+85,"test_top exe0 jump_enable_o", false,-1);
        tracep->declBus(c+38,"test_top exe0 opcode", false,-1, 6,0);
        tracep->declBus(c+39,"test_top exe0 funct3", false,-1, 2,0);
        tracep->declBus(c+40,"test_top exe0 funct7", false,-1, 6,0);
        tracep->declBus(c+41,"test_top exe0 shamt", false,-1, 4,0);
        tracep->declBit(c+123,"test_top exe0 s_l_mem_we_o", false,-1);
        tracep->declBus(c+124,"test_top exe0 s_l_mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+125,"test_top exe0 s_l_mem_data_o", false,-1, 31,0);
        tracep->declBus(c+126,"test_top exe0 s_l_mem_op_o", false,-1, 3,0);
        tracep->declBus(c+138,"test_top exe0 r_reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+141,"test_top exe0 s_l_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+139,"test_top exe0 r_reg_we_o", false,-1);
        tracep->declBit(c+127,"test_top exe0 s_l_reg_we_o", false,-1);
        tracep->declBit(c+42,"test_top exe0 b_j_jump_enable_o", false,-1);
        tracep->declBus(c+43,"test_top exe0 b_j_jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+129,"test_top exe0 exe_type_r0 rst_i", false,-1);
        tracep->declBus(c+7,"test_top exe0 exe_type_r0 op1_i", false,-1, 31,0);
        tracep->declBus(c+8,"test_top exe0 exe_type_r0 op2_i", false,-1, 31,0);
        tracep->declBus(c+11,"test_top exe0 exe_type_r0 inst_i", false,-1, 31,0);
        tracep->declBus(c+44,"test_top exe0 exe_type_r0 reg_waddr_i", false,-1, 31,0);
        tracep->declBus(c+138,"test_top exe0 exe_type_r0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+139,"test_top exe0 exe_type_r0 reg_we_o", false,-1);
        tracep->declBus(c+38,"test_top exe0 exe_type_r0 opcode", false,-1, 6,0);
        tracep->declBus(c+39,"test_top exe0 exe_type_r0 funct3", false,-1, 2,0);
        tracep->declBus(c+40,"test_top exe0 exe_type_r0 funct7", false,-1, 6,0);
        tracep->declBit(c+45,"test_top exe0 exe_type_r0 isType_r", false,-1);
        tracep->declBit(c+129,"test_top exe0 exe_type_s_l0 rst_i", false,-1);
        tracep->declBus(c+7,"test_top exe0 exe_type_s_l0 op1_i", false,-1, 31,0);
        tracep->declBus(c+8,"test_top exe0 exe_type_s_l0 op2_i", false,-1, 31,0);
        tracep->declBus(c+11,"test_top exe0 exe_type_s_l0 inst_i", false,-1, 31,0);
        tracep->declBus(c+141,"test_top exe0 exe_type_s_l0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+127,"test_top exe0 exe_type_s_l0 reg_we_o", false,-1);
        tracep->declBus(c+124,"test_top exe0 exe_type_s_l0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+125,"test_top exe0 exe_type_s_l0 mem_data_o", false,-1, 31,0);
        tracep->declBit(c+123,"test_top exe0 exe_type_s_l0 mem_we_o", false,-1);
        tracep->declBus(c+126,"test_top exe0 exe_type_s_l0 mem_op_o", false,-1, 3,0);
        tracep->declBus(c+38,"test_top exe0 exe_type_s_l0 opcode", false,-1, 6,0);
        tracep->declBus(c+39,"test_top exe0 exe_type_s_l0 funct3", false,-1, 2,0);
        tracep->declBus(c+46,"test_top exe0 exe_type_s_l0 load_addr_offset", false,-1, 31,0);
        tracep->declBus(c+47,"test_top exe0 exe_type_s_l0 store_addr_offset", false,-1, 31,0);
        tracep->declBit(c+129,"test_top exe0 exe_type_b_j0 rst_i", false,-1);
        tracep->declBus(c+11,"test_top exe0 exe_type_b_j0 inst_i", false,-1, 31,0);
        tracep->declBus(c+48,"test_top exe0 exe_type_b_j0 inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+7,"test_top exe0 exe_type_b_j0 op1_i", false,-1, 31,0);
        tracep->declBus(c+8,"test_top exe0 exe_type_b_j0 op2_i", false,-1, 31,0);
        tracep->declBus(c+43,"test_top exe0 exe_type_b_j0 jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+42,"test_top exe0 exe_type_b_j0 jump_enable_o", false,-1);
        tracep->declBus(c+38,"test_top exe0 exe_type_b_j0 opcode", false,-1, 6,0);
        tracep->declBus(c+39,"test_top exe0 exe_type_b_j0 funct3", false,-1, 2,0);
        tracep->declBit(c+49,"test_top exe0 exe_type_b_j0 op1_eq_op2", false,-1);
        tracep->declBus(c+48,"test_top exe0 exe_type_b_j0 pc", false,-1, 31,0);
        tracep->declBit(c+129,"test_top exe_mem0 rst_i", false,-1);
        tracep->declBit(c+130,"test_top exe_mem0 clk_i", false,-1);
        tracep->declBus(c+99,"test_top exe_mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+100,"test_top exe_mem0 reg_we_i", false,-1);
        tracep->declBus(c+101,"test_top exe_mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBit(c+132,"test_top exe_mem0 mem_we_i", false,-1);
        tracep->declBus(c+133,"test_top exe_mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+134,"test_top exe_mem0 mem_data_i", false,-1, 31,0);
        tracep->declBus(c+135,"test_top exe_mem0 mem_op_i", false,-1, 3,0);
        tracep->declBus(c+84,"test_top exe_mem0 stall_i", false,-1, 5,0);
        tracep->declBit(c+16,"test_top exe_mem0 mem_we_o", false,-1);
        tracep->declBus(c+17,"test_top exe_mem0 mem_addr_o", false,-1, 31,0);
        tracep->declBus(c+18,"test_top exe_mem0 mem_data_o", false,-1, 31,0);
        tracep->declBus(c+19,"test_top exe_mem0 mem_op_o", false,-1, 3,0);
        tracep->declBus(c+13,"test_top exe_mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+14,"test_top exe_mem0 reg_we_o", false,-1);
        tracep->declBus(c+15,"test_top exe_mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+129,"test_top mem0 rst_i", false,-1);
        tracep->declBus(c+13,"test_top mem0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+14,"test_top mem0 reg_we_i", false,-1);
        tracep->declBus(c+15,"test_top mem0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+109,"test_top mem0 ram_data_i", false,-1, 31,0);
        tracep->declBit(c+16,"test_top mem0 mem_we_i", false,-1);
        tracep->declBus(c+17,"test_top mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBus(c+18,"test_top mem0 mem_data_i", false,-1, 31,0);
        tracep->declBus(c+19,"test_top mem0 mem_op_i", false,-1, 3,0);
        tracep->declBus(c+106,"test_top mem0 ram_addr_o", false,-1, 31,0);
        tracep->declBit(c+107,"test_top mem0 ram_w_request_o", false,-1);
        tracep->declBus(c+108,"test_top mem0 ram_data_o", false,-1, 31,0);
        tracep->declBus(c+103,"test_top mem0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+104,"test_top mem0 reg_we_o", false,-1);
        tracep->declBus(c+105,"test_top mem0 reg_wdata_o", false,-1, 31,0);
        tracep->declBus(c+50,"test_top mem0 ram_addr_offset", false,-1, 1,0);
        tracep->declBit(c+129,"test_top mem_wb0 rst_i", false,-1);
        tracep->declBit(c+130,"test_top mem_wb0 clk_i", false,-1);
        tracep->declBus(c+103,"test_top mem_wb0 reg_waddr_i", false,-1, 4,0);
        tracep->declBit(c+104,"test_top mem_wb0 reg_we_i", false,-1);
        tracep->declBus(c+105,"test_top mem_wb0 reg_wdata_i", false,-1, 31,0);
        tracep->declBus(c+84,"test_top mem_wb0 stall_i", false,-1, 5,0);
        tracep->declBus(c+20,"test_top mem_wb0 reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+21,"test_top mem_wb0 reg_we_o", false,-1);
        tracep->declBus(c+22,"test_top mem_wb0 reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+130,"test_top dpram0 clk_i", false,-1);
        tracep->declBit(c+129,"test_top dpram0 rst_i", false,-1);
        tracep->declBus(c+106,"test_top dpram0 addr_i", false,-1, 31,0);
        tracep->declBit(c+107,"test_top dpram0 we_i", false,-1);
        tracep->declBus(c+108,"test_top dpram0 data_i", false,-1, 31,0);
        tracep->declBus(c+109,"test_top dpram0 data_o", false,-1, 31,0);
        tracep->declBit(c+3,"test_top dpram0 inst_ce_i", false,-1);
        tracep->declBus(c+2,"test_top dpram0 pc_i", false,-1, 31,0);
        tracep->declBus(c+131,"test_top dpram0 inst_o", false,-1, 31,0);
        tracep->declBus(c+128,"test_top dpram0 addr4", false,-1, 18,0);
        tracep->declBus(c+51,"test_top dpram0 rom_addr4", false,-1, 18,0);
        tracep->declBit(c+130,"test_top regfile0 clk_i", false,-1);
        tracep->declBit(c+129,"test_top regfile0 rst_i", false,-1);
        tracep->declBit(c+21,"test_top regfile0 we_i", false,-1);
        tracep->declBus(c+20,"test_top regfile0 waddr_i", false,-1, 4,0);
        tracep->declBus(c+22,"test_top regfile0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+95,"test_top regfile0 re1_i", false,-1);
        tracep->declBus(c+93,"test_top regfile0 raddr1_i", false,-1, 4,0);
        tracep->declBit(c+96,"test_top regfile0 re2_i", false,-1);
        tracep->declBus(c+94,"test_top regfile0 raddr2_i", false,-1, 4,0);
        tracep->declBus(c+97,"test_top regfile0 rdata1_o", false,-1, 31,0);
        tracep->declBus(c+98,"test_top regfile0 rdata2_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+52+i*1,"test_top regfile0 regs", true,(i+0), 31,0);}}
        tracep->declBus(c+1,"test_top regfile0 i", false,-1, 31,0);
    }
}

void Vtest_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtest_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtest_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
        tracep->fullBit(oldp+3,(vlSymsp->TOP__test_top.__PVT__ce_wire));
        tracep->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
        tracep->fullIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
        tracep->fullBit(oldp+6,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                                 & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xfU)) 
                                     == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                                    | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 0x14U)) 
                                       == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
        tracep->fullIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
        tracep->fullBit(oldp+9,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
        tracep->fullCData(oldp+10,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
        tracep->fullCData(oldp+12,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),5);
        tracep->fullCData(oldp+13,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
        tracep->fullBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
        tracep->fullIData(oldp+15,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
        tracep->fullBit(oldp+16,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
        tracep->fullIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
        tracep->fullIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
        tracep->fullCData(oldp+19,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
        tracep->fullCData(oldp+20,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
        tracep->fullBit(oldp+21,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
        tracep->fullIData(oldp+22,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
        tracep->fullCData(oldp+23,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
        tracep->fullBit(oldp+24,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
        tracep->fullCData(oldp+25,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
        tracep->fullCData(oldp+26,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                     ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->fullCData(oldp+27,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                     ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 0x14U))
                                     : 0U)),5);
        tracep->fullBit(oldp+28,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
        tracep->fullBit(oldp+29,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
        tracep->fullBit(oldp+30,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
        tracep->fullCData(oldp+31,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                     ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->fullCData(oldp+32,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 7U))),5);
        tracep->fullCData(oldp+33,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+34,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+35,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+36,((0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0x19U))),7);
        tracep->fullBit(oldp+37,(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
        tracep->fullCData(oldp+38,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
        tracep->fullCData(oldp+39,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+40,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+41,((0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+42,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_enable_o));
        tracep->fullIData(oldp+43,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_addr_o),32);
        tracep->fullIData(oldp+44,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),32);
        tracep->fullBit(oldp+45,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
        tracep->fullIData(oldp+46,(((0xfffff000U & 
                                     ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (0xfffU 
                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                      >> 0x14U)))),32);
        tracep->fullIData(oldp+47,(((0xfffff000U & 
                                     ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (
                                                   (0xfe0U 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                         >> 7U))))),32);
        tracep->fullIData(oldp+48,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),32);
        tracep->fullBit(oldp+49,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
        tracep->fullCData(oldp+50,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
        tracep->fullIData(oldp+51,((0x7fffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),19);
        tracep->fullIData(oldp+52,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
        tracep->fullIData(oldp+54,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
        tracep->fullIData(oldp+55,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
        tracep->fullIData(oldp+57,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
        tracep->fullIData(oldp+58,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
        tracep->fullIData(oldp+59,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
        tracep->fullIData(oldp+60,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
        tracep->fullIData(oldp+61,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
        tracep->fullIData(oldp+62,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
        tracep->fullIData(oldp+64,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
        tracep->fullIData(oldp+65,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
        tracep->fullIData(oldp+66,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
        tracep->fullIData(oldp+67,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
        tracep->fullIData(oldp+68,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
        tracep->fullIData(oldp+69,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
        tracep->fullIData(oldp+70,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
        tracep->fullIData(oldp+71,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
        tracep->fullIData(oldp+72,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
        tracep->fullIData(oldp+73,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
        tracep->fullIData(oldp+74,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
        tracep->fullIData(oldp+75,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
        tracep->fullIData(oldp+76,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
        tracep->fullIData(oldp+78,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
        tracep->fullIData(oldp+79,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
        tracep->fullIData(oldp+80,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
        tracep->fullIData(oldp+81,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
        tracep->fullIData(oldp+83,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
        tracep->fullCData(oldp+84,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
        tracep->fullBit(oldp+85,(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o));
        tracep->fullIData(oldp+86,((0x1fU & vlSymsp->TOP__test_top.__Vcellout__exe0__jump_addr_o)),32);
        tracep->fullIData(oldp+87,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
        tracep->fullCData(oldp+88,((0x1fU & vlSymsp->TOP__test_top.__Vcellout__id0__inst_addr_o)),5);
        tracep->fullIData(oldp+89,(vlSymsp->TOP__test_top.__PVT__id_op1_o),32);
        tracep->fullIData(oldp+90,(vlSymsp->TOP__test_top.__PVT__id_op2_o),32);
        tracep->fullBit(oldp+91,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
        tracep->fullCData(oldp+92,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
        tracep->fullCData(oldp+93,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        tracep->fullCData(oldp+94,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
        tracep->fullBit(oldp+95,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
        tracep->fullBit(oldp+96,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
        tracep->fullIData(oldp+97,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
        tracep->fullIData(oldp+98,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
        tracep->fullCData(oldp+99,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
        tracep->fullBit(oldp+100,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
        tracep->fullIData(oldp+101,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
        tracep->fullCData(oldp+102,((0x1fU & vlSymsp->TOP__test_top.__Vcellout__exe0__jump_addr_o)),5);
        tracep->fullCData(oldp+103,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
        tracep->fullBit(oldp+104,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
        tracep->fullIData(oldp+105,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
        tracep->fullIData(oldp+106,(vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o),32);
        tracep->fullBit(oldp+107,(vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o));
        tracep->fullIData(oldp+108,(vlSymsp->TOP__test_top.__PVT__mem_ram_data_o),32);
        tracep->fullIData(oldp+109,(vlSymsp->TOP__test_top__dpram0.__PVT__data_o),32);
        tracep->fullIData(oldp+110,(vlSymsp->TOP__test_top.__Vcellout__id0__inst_addr_o),32);
        tracep->fullIData(oldp+111,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
        tracep->fullIData(oldp+112,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
        tracep->fullCData(oldp+113,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o),5);
        tracep->fullCData(oldp+114,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o),5);
        tracep->fullBit(oldp+115,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o));
        tracep->fullBit(oldp+116,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o));
        tracep->fullIData(oldp+117,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o),32);
        tracep->fullIData(oldp+118,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o),32);
        tracep->fullBit(oldp+119,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o));
        tracep->fullCData(oldp+120,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o),5);
        tracep->fullCData(oldp+121,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_inst_o)),7);
        tracep->fullIData(oldp+122,(vlSymsp->TOP__test_top.__Vcellout__exe0__jump_addr_o),32);
        tracep->fullBit(oldp+123,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_we_o));
        tracep->fullIData(oldp+124,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_addr_o),32);
        tracep->fullIData(oldp+125,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_data_o),32);
        tracep->fullCData(oldp+126,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_op_o),4);
        tracep->fullBit(oldp+127,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o));
        tracep->fullIData(oldp+128,((0x7fffcU & vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)),19);
        tracep->fullBit(oldp+129,(vlTOPp->rst_i));
        tracep->fullBit(oldp+130,(vlTOPp->clk_i));
        tracep->fullIData(oldp+131,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                      ? ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                          [(0x1fffcU 
                                            & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                          << 0x18U) 
                                         | ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                             [(0x1ffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (0x7fffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                             << 0x10U) 
                                            | ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                [(0x1ffffU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fffcU 
                                                      & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                << 8U) 
                                               | vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                               [(0x1ffffU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    (0x7fffcU 
                                                     & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                                      : 0U)),32);
        tracep->fullBit(oldp+132,(((~ (IData)(vlTOPp->rst_i)) 
                                   & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                          >> 6U)) & 
                                      ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                        ? ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 4U)) 
                                           & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 3U)) 
                                              & ((~ 
                                                  (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 2U)) 
                                                 & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 1U) 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_we_o))))))
                                        : ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 4U)) 
                                           & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 3U)) 
                                              & ((~ 
                                                  (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 2U)) 
                                                 & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 1U) 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_we_o)))))))))));
        tracep->fullIData(oldp+133,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((0x20U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_addr_o
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_addr_o
                                                        : 0U)
                                                       : 0U)))))))),32);
        tracep->fullIData(oldp+134,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((0x20U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_data_o
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_data_o
                                                        : 0U)
                                                       : 0U)))))))),32);
        tracep->fullCData(oldp+135,(((IData)(vlTOPp->rst_i)
                                      ? 0U : ((0x40U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((0x20U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_op_o)
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                        ? (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_op_o)
                                                        : 0U)
                                                       : 0U)))))))),4);
        tracep->fullIData(oldp+136,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                      ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                      : 0U)),32);
        tracep->fullIData(oldp+137,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                      ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                      : 0U)),32);
        tracep->fullIData(oldp+138,(((1U & ((IData)(vlTOPp->rst_i) 
                                            | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
                                      ? 0U : ((0x4000U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((0x2000U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                    : 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                         >> 0x19U)))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                      >> vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                      : 0U)
                                                     : 
                                                    ((0x1fU 
                                                      >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                      >> vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                      : 0U))
                                                    : 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))
                                               : ((0x2000U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                     < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                     < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                     << vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                     : 0U)
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                         >> 0x19U)))
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                     + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                     : 
                                                    (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                     - vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))))))),32);
        tracep->fullBit(oldp+139,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                            | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))))));
        tracep->fullBit(oldp+140,(vlSymsp->TOP__test_top.__PVT__exe_stallreq_o));
        tracep->fullIData(oldp+141,(0U),32);
    }
}
