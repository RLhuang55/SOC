// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


//======================

void Vtest_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vtest_top::traceInit, &Vtest_top::traceFull, &Vtest_top::traceChg, this);
}
void Vtest_top::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vtest_top* t = (Vtest_top*)userthis;
    Vtest_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vtest_top::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtest_top* t = (Vtest_top*)userthis;
    Vtest_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vtest_top::traceInitThis(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vtest_top::traceFullThis(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtest_top::traceInitThis__1(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1001,"rst_i", false,-1);
        vcdp->declBit(c+1009,"clk_i", false,-1);
        vcdp->declBit(c+1017,"halt_o", false,-1);
        vcdp->declBit(c+1001,"test_top rst_i", false,-1);
        vcdp->declBit(c+1009,"test_top clk_i", false,-1);
        vcdp->declBit(c+689,"test_top halt_o", false,-1);
        vcdp->declBus(c+697,"test_top pc_wire", false,-1, 31,0);
        vcdp->declBit(c+689,"test_top mem_halt_o", false,-1);
        vcdp->declBit(c+705,"test_top ce_wire", false,-1);
        vcdp->declBus(c+377,"test_top ctrl_stall_o", false,-1, 5,0);
        vcdp->declBit(c+385,"test_top ctrl_flush_jump_o", false,-1);
        vcdp->declBus(c+393,"test_top ctrl_new_pc_o", false,-1, 31,0);
        vcdp->declBus(c+697,"test_top if_inst_addr_o", false,-1, 31,0);
        vcdp->declBus(c+993,"test_top if_inst_o", false,-1, 31,0);
        vcdp->declBus(c+713,"test_top if_id_inst_addr_o", false,-1, 31,0);
        vcdp->declBus(c+721,"test_top if_id_inst_o", false,-1, 31,0);
        vcdp->declBus(c+401,"test_top id_inst_o", false,-1, 31,0);
        vcdp->declBus(c+409,"test_top id_inst_addr_o", false,-1, 31,0);
        vcdp->declBus(c+417,"test_top id_op1_o", false,-1, 31,0);
        vcdp->declBus(c+425,"test_top id_op2_o", false,-1, 31,0);
        vcdp->declBit(c+433,"test_top id_reg_we_o", false,-1);
        vcdp->declBit(c+729,"test_top id_stallreq_o", false,-1);
        vcdp->declBus(c+441,"test_top id_reg_waddr_o", false,-1, 4,0);
        vcdp->declBus(c+449,"test_top id_reg1_addr_o", false,-1, 4,0);
        vcdp->declBus(c+457,"test_top id_reg2_addr_o", false,-1, 4,0);
        vcdp->declBit(c+465,"test_top id_reg1_re_o", false,-1);
        vcdp->declBit(c+473,"test_top id_reg2_re_o", false,-1);
        vcdp->declBus(c+481,"test_top reg1_data_o", false,-1, 31,0);
        vcdp->declBus(c+489,"test_top reg2_data_o", false,-1, 31,0);
        vcdp->declBus(c+737,"test_top id_exe_op1_o", false,-1, 31,0);
        vcdp->declBus(c+745,"test_top id_exe_op2_o", false,-1, 31,0);
        vcdp->declBit(c+753,"test_top id_exe_reg_we_o", false,-1);
        vcdp->declBus(c+761,"test_top id_exe_reg_waddr_o", false,-1, 4,0);
        vcdp->declBus(c+769,"test_top id_exe_inst_o", false,-1, 31,0);
        vcdp->declBus(c+777,"test_top id_exe_inst_addr_o", false,-1, 31,0);
        vcdp->declBus(c+497,"test_top exe_reg_waddr_o", false,-1, 4,0);
        vcdp->declBit(c+505,"test_top exe_reg_we_o", false,-1);
        vcdp->declBus(c+513,"test_top exe_reg_wdata_o", false,-1, 31,0);
        vcdp->declBit(c+1025,"test_top exe_mem_we_o", false,-1);
        vcdp->declBus(c+521,"test_top exe_mem_addr_o", false,-1, 31,0);
        vcdp->declBus(c+1033,"test_top exe_mem_data_o", false,-1, 31,0);
        vcdp->declBus(c+1041,"test_top exe_mem_op_o", false,-1, 3,0);
        vcdp->declBus(c+393,"test_top exe_jump_addr_o", false,-1, 31,0);
        vcdp->declBit(c+385,"test_top exe_jump_enable_o", false,-1);
        vcdp->declBit(c+529,"test_top exe_stallreq_o", false,-1);
        vcdp->declBus(c+785,"test_top exe_mem_reg_waddr_o", false,-1, 4,0);
        vcdp->declBit(c+793,"test_top exe_mem_reg_we_o", false,-1);
        vcdp->declBus(c+801,"test_top exe_mem_reg_wdata_o", false,-1, 31,0);
        vcdp->declBit(c+809,"test_top exe_mem_mem_we_o", false,-1);
        vcdp->declBus(c+817,"test_top exe_mem_mem_addr_o", false,-1, 31,0);
        vcdp->declBus(c+825,"test_top exe_mem_mem_data_o", false,-1, 31,0);
        vcdp->declBus(c+833,"test_top exe_mem_mem_op_o", false,-1, 3,0);
        vcdp->declBus(c+537,"test_top mem_reg_waddr_o", false,-1, 4,0);
        vcdp->declBit(c+545,"test_top mem_reg_we_o", false,-1);
        vcdp->declBus(c+553,"test_top mem_reg_wdata_o", false,-1, 31,0);
        vcdp->declBus(c+841,"test_top mem_wb_reg_waddr_o", false,-1, 4,0);
        vcdp->declBit(c+849,"test_top mem_wb_reg_we_o", false,-1);
        vcdp->declBus(c+857,"test_top mem_wb_reg_wdata_o", false,-1, 31,0);
        vcdp->declBus(c+561,"test_top mem_ram_addr_o", false,-1, 31,0);
        vcdp->declBit(c+569,"test_top mem_ram_w_request_o", false,-1);
        vcdp->declBus(c+577,"test_top mem_ram_data_o", false,-1, 31,0);
        vcdp->declBus(c+585,"test_top mem_ram_data_i", false,-1, 31,0);
        vcdp->declBus(c+865,"test_top id_exe_rd_o", false,-1, 4,0);
        vcdp->declBit(c+873,"test_top id_exe_inst_is_load_o", false,-1);
        vcdp->declBit(c+1009,"test_top pc_reg0 clk_i", false,-1);
        vcdp->declBit(c+1001,"test_top pc_reg0 rst_i", false,-1);
        vcdp->declBus(c+377,"test_top pc_reg0 stall_i", false,-1, 5,0);
        vcdp->declBit(c+385,"test_top pc_reg0 flush_jump_i", false,-1);
        vcdp->declBus(c+393,"test_top pc_reg0 new_pc_i", false,-1, 31,0);
        vcdp->declBus(c+697,"test_top pc_reg0 pc_o", false,-1, 31,0);
        vcdp->declBit(c+705,"test_top pc_reg0 ce_o", false,-1);
        vcdp->declBit(c+1001,"test_top ctrl0 rst_i", false,-1);
        vcdp->declBus(c+393,"test_top ctrl0 jump_addr_i", false,-1, 31,0);
        vcdp->declBit(c+385,"test_top ctrl0 jump_enable_i", false,-1);
        vcdp->declBit(c+729,"test_top ctrl0 stallreq_from_id_i", false,-1);
        vcdp->declBit(c+529,"test_top ctrl0 stallreq_from_exe_i", false,-1);
        vcdp->declBus(c+377,"test_top ctrl0 stall_o", false,-1, 5,0);
        vcdp->declBit(c+385,"test_top ctrl0 flush_jump_o", false,-1);
        vcdp->declBus(c+393,"test_top ctrl0 new_pc_o", false,-1, 31,0);
        vcdp->declBit(c+1009,"test_top if_id0 clk_i", false,-1);
        vcdp->declBit(c+1001,"test_top if_id0 rst_i", false,-1);
        vcdp->declBus(c+697,"test_top if_id0 inst_addr_i", false,-1, 31,0);
        vcdp->declBus(c+993,"test_top if_id0 inst_i", false,-1, 31,0);
        vcdp->declBus(c+377,"test_top if_id0 stall_i", false,-1, 5,0);
        vcdp->declBit(c+385,"test_top if_id0 flush_jump_i", false,-1);
        vcdp->declBus(c+713,"test_top if_id0 inst_addr_o", false,-1, 31,0);
        vcdp->declBus(c+721,"test_top if_id0 inst_o", false,-1, 31,0);
        vcdp->declBit(c+1001,"test_top id0 rst_i", false,-1);
        vcdp->declBus(c+713,"test_top id0 inst_addr_i", false,-1, 31,0);
        vcdp->declBus(c+721,"test_top id0 inst_i", false,-1, 31,0);
        vcdp->declBus(c+481,"test_top id0 reg1_rdata_i", false,-1, 31,0);
        vcdp->declBus(c+489,"test_top id0 reg2_rdata_i", false,-1, 31,0);
        vcdp->declBus(c+497,"test_top id0 exe_reg_waddr_i", false,-1, 4,0);
        vcdp->declBus(c+513,"test_top id0 exe_reg_wdata_i", false,-1, 31,0);
        vcdp->declBit(c+505,"test_top id0 exe_reg_we_i", false,-1);
        vcdp->declBus(c+537,"test_top id0 mem_reg_waddr_i", false,-1, 4,0);
        vcdp->declBus(c+553,"test_top id0 mem_reg_wdata_i", false,-1, 31,0);
        vcdp->declBit(c+545,"test_top id0 mem_reg_we_i", false,-1);
        vcdp->declBus(c+841,"test_top id0 mem_wb_reg_waddr_i", false,-1, 4,0);
        vcdp->declBus(c+857,"test_top id0 mem_wb_reg_wdata_i", false,-1, 31,0);
        vcdp->declBit(c+849,"test_top id0 mem_wb_reg_we_i", false,-1);
        vcdp->declBus(c+865,"test_top id0 exe_rd_i", false,-1, 4,0);
        vcdp->declBit(c+873,"test_top id0 pre_inst_is_load_i", false,-1);
        vcdp->declBus(c+449,"test_top id0 reg1_raddr_o", false,-1, 4,0);
        vcdp->declBus(c+457,"test_top id0 reg2_raddr_o", false,-1, 4,0);
        vcdp->declBit(c+465,"test_top id0 reg1_re_o", false,-1);
        vcdp->declBit(c+473,"test_top id0 reg2_re_o", false,-1);
        vcdp->declBus(c+401,"test_top id0 inst_o", false,-1, 31,0);
        vcdp->declBus(c+409,"test_top id0 inst_addr_o", false,-1, 31,0);
        vcdp->declBus(c+417,"test_top id0 op1_o", false,-1, 31,0);
        vcdp->declBus(c+425,"test_top id0 op2_o", false,-1, 31,0);
        vcdp->declBit(c+433,"test_top id0 reg_we_o", false,-1);
        vcdp->declBus(c+441,"test_top id0 reg_waddr_o", false,-1, 4,0);
        vcdp->declBit(c+729,"test_top id0 stallreq_o", false,-1);
        vcdp->declBus(c+593,"test_top id0 op1_o_final", false,-1, 31,0);
        vcdp->declBus(c+601,"test_top id0 op2_o_final", false,-1, 31,0);
        vcdp->declBus(c+881,"test_top id0 opcode", false,-1, 6,0);
        vcdp->declBus(c+889,"test_top id0 i_reg1_raddr_o", false,-1, 4,0);
        vcdp->declBus(c+1065,"test_top id0 i_reg2_raddr_o", false,-1, 4,0);
        vcdp->declBit(c+1073,"test_top id0 i_reg1_re_o", false,-1);
        vcdp->declBit(c+1081,"test_top id0 i_reg2_re_o", false,-1);
        vcdp->declBus(c+481,"test_top id0 i_op1_o", false,-1, 31,0);
        vcdp->declBus(c+9,"test_top id0 i_op2_o", false,-1, 31,0);
        vcdp->declBit(c+1073,"test_top id0 i_reg_we_o", false,-1);
        vcdp->declBus(c+897,"test_top id0 i_reg_waddr_o", false,-1, 4,0);
        vcdp->declBus(c+17,"test_top id0 r_reg1_raddr_o", false,-1, 4,0);
        vcdp->declBus(c+25,"test_top id0 r_reg2_raddr_o", false,-1, 4,0);
        vcdp->declBit(c+33,"test_top id0 r_reg1_re_o", false,-1);
        vcdp->declBit(c+41,"test_top id0 r_reg2_re_o", false,-1);
        vcdp->declBus(c+361,"test_top id0 r_op1_o", false,-1, 31,0);
        vcdp->declBus(c+369,"test_top id0 r_op2_o", false,-1, 31,0);
        vcdp->declBit(c+49,"test_top id0 r_reg_we_o", false,-1);
        vcdp->declBus(c+57,"test_top id0 r_reg_waddr_o", false,-1, 4,0);
        vcdp->declBus(c+897,"test_top id0 rd", false,-1, 4,0);
        vcdp->declBus(c+889,"test_top id0 rs1", false,-1, 4,0);
        vcdp->declBus(c+905,"test_top id0 rs2", false,-1, 4,0);
        vcdp->declBit(c+729,"test_top id0 is_load_hazard", false,-1);
        vcdp->declBus(c+609,"test_top id0 come_which1", false,-1, 1,0);
        vcdp->declBus(c+617,"test_top id0 come_which2", false,-1, 1,0);
        vcdp->declBus(c+721,"test_top id0 inst_type_i inst_i", false,-1, 31,0);
        vcdp->declBus(c+481,"test_top id0 inst_type_i reg1_rdata_i", false,-1, 31,0);
        vcdp->declBus(c+489,"test_top id0 inst_type_i reg2_rdata_i", false,-1, 31,0);
        vcdp->declBus(c+889,"test_top id0 inst_type_i reg1_raddr_o", false,-1, 4,0);
        vcdp->declBus(c+1065,"test_top id0 inst_type_i reg2_raddr_o", false,-1, 4,0);
        vcdp->declBit(c+1073,"test_top id0 inst_type_i reg1_re_o", false,-1);
        vcdp->declBit(c+1081,"test_top id0 inst_type_i reg2_re_o", false,-1);
        vcdp->declBus(c+481,"test_top id0 inst_type_i op1_o", false,-1, 31,0);
        vcdp->declBus(c+9,"test_top id0 inst_type_i op2_o", false,-1, 31,0);
        vcdp->declBit(c+1073,"test_top id0 inst_type_i reg_we_o", false,-1);
        vcdp->declBus(c+897,"test_top id0 inst_type_i reg_waddr_o", false,-1, 4,0);
        vcdp->declBus(c+913,"test_top id0 inst_type_i funct3", false,-1, 2,0);
        vcdp->declBus(c+897,"test_top id0 inst_type_i rd", false,-1, 4,0);
        vcdp->declBus(c+889,"test_top id0 inst_type_i rs1", false,-1, 4,0);
        vcdp->declBus(c+905,"test_top id0 inst_type_i rs2", false,-1, 4,0);
        vcdp->declBus(c+721,"test_top id0 inst_type_r inst_i", false,-1, 31,0);
        vcdp->declBus(c+481,"test_top id0 inst_type_r reg1_rdata_i", false,-1, 31,0);
        vcdp->declBus(c+489,"test_top id0 inst_type_r reg2_rdata_i", false,-1, 31,0);
        vcdp->declBus(c+17,"test_top id0 inst_type_r reg1_raddr_o", false,-1, 4,0);
        vcdp->declBus(c+25,"test_top id0 inst_type_r reg2_raddr_o", false,-1, 4,0);
        vcdp->declBit(c+33,"test_top id0 inst_type_r reg1_re_o", false,-1);
        vcdp->declBit(c+41,"test_top id0 inst_type_r reg2_re_o", false,-1);
        vcdp->declBus(c+361,"test_top id0 inst_type_r op1_o", false,-1, 31,0);
        vcdp->declBus(c+369,"test_top id0 inst_type_r op2_o", false,-1, 31,0);
        vcdp->declBit(c+49,"test_top id0 inst_type_r reg_we_o", false,-1);
        vcdp->declBus(c+57,"test_top id0 inst_type_r reg_waddr_o", false,-1, 4,0);
        vcdp->declBus(c+881,"test_top id0 inst_type_r opcode", false,-1, 6,0);
        vcdp->declBus(c+913,"test_top id0 inst_type_r funct3", false,-1, 2,0);
        vcdp->declBus(c+921,"test_top id0 inst_type_r funct7", false,-1, 6,0);
        vcdp->declBus(c+905,"test_top id0 inst_type_r shamt", false,-1, 4,0);
        vcdp->declBus(c+897,"test_top id0 inst_type_r rd", false,-1, 4,0);
        vcdp->declBus(c+889,"test_top id0 inst_type_r rs1", false,-1, 4,0);
        vcdp->declBus(c+905,"test_top id0 inst_type_r rs2", false,-1, 4,0);
        vcdp->declBit(c+65,"test_top id0 inst_type_r isType_r", false,-1);
        vcdp->declBit(c+1001,"test_top id_exe0 rst_i", false,-1);
        vcdp->declBit(c+1009,"test_top id_exe0 clk_i", false,-1);
        vcdp->declBus(c+417,"test_top id_exe0 op1_i", false,-1, 31,0);
        vcdp->declBus(c+425,"test_top id_exe0 op2_i", false,-1, 31,0);
        vcdp->declBit(c+433,"test_top id_exe0 reg_we_i", false,-1);
        vcdp->declBus(c+441,"test_top id_exe0 reg_waddr_i", false,-1, 4,0);
        vcdp->declBus(c+401,"test_top id_exe0 inst_i", false,-1, 31,0);
        vcdp->declBus(c+409,"test_top id_exe0 inst_addr_i", false,-1, 31,0);
        vcdp->declBus(c+377,"test_top id_exe0 stall_i", false,-1, 5,0);
        vcdp->declBit(c+385,"test_top id_exe0 flush_jump_i", false,-1);
        vcdp->declBit(c+873,"test_top id_exe0 inst_is_load_o", false,-1);
        vcdp->declBus(c+865,"test_top id_exe0 rd_o", false,-1, 4,0);
        vcdp->declBus(c+737,"test_top id_exe0 op1_o", false,-1, 31,0);
        vcdp->declBus(c+745,"test_top id_exe0 op2_o", false,-1, 31,0);
        vcdp->declBit(c+753,"test_top id_exe0 reg_we_o", false,-1);
        vcdp->declBus(c+761,"test_top id_exe0 reg_waddr_o", false,-1, 4,0);
        vcdp->declBus(c+769,"test_top id_exe0 inst_o", false,-1, 31,0);
        vcdp->declBus(c+777,"test_top id_exe0 inst_addr_o", false,-1, 31,0);
        vcdp->declBus(c+625,"test_top id_exe0 opcode", false,-1, 6,0);
        vcdp->declBit(c+1001,"test_top exe0 rst_i", false,-1);
        vcdp->declBus(c+737,"test_top exe0 op1_i", false,-1, 31,0);
        vcdp->declBus(c+745,"test_top exe0 op2_i", false,-1, 31,0);
        vcdp->declBit(c+753,"test_top exe0 reg_we_i", false,-1);
        vcdp->declBus(c+761,"test_top exe0 reg_waddr_i", false,-1, 4,0);
        vcdp->declBus(c+769,"test_top exe0 inst_i", false,-1, 31,0);
        vcdp->declBus(c+777,"test_top exe0 inst_addr_i", false,-1, 31,0);
        vcdp->declBit(c+1025,"test_top exe0 mem_we_o", false,-1);
        vcdp->declBus(c+521,"test_top exe0 mem_addr_o", false,-1, 31,0);
        vcdp->declBus(c+1033,"test_top exe0 mem_data_o", false,-1, 31,0);
        vcdp->declBus(c+1041,"test_top exe0 mem_op_o", false,-1, 3,0);
        vcdp->declBus(c+497,"test_top exe0 reg_waddr_o", false,-1, 4,0);
        vcdp->declBit(c+505,"test_top exe0 reg_we_o", false,-1);
        vcdp->declBus(c+513,"test_top exe0 reg_wdata_o", false,-1, 31,0);
        vcdp->declBus(c+393,"test_top exe0 jump_addr_o", false,-1, 31,0);
        vcdp->declBit(c+385,"test_top exe0 jump_enable_o", false,-1);
        vcdp->declBit(c+529,"test_top exe0 stallreq_o", false,-1);
        vcdp->declBus(c+929,"test_top exe0 opcode", false,-1, 6,0);
        vcdp->declBus(c+937,"test_top exe0 funct3", false,-1, 2,0);
        vcdp->declBus(c+945,"test_top exe0 funct7", false,-1, 6,0);
        vcdp->declBus(c+953,"test_top exe0 shamt", false,-1, 4,0);
        vcdp->declBit(c+633,"test_top exe0 s_l_mem_we_o", false,-1);
        vcdp->declBus(c+641,"test_top exe0 s_l_mem_addr_o", false,-1, 31,0);
        vcdp->declBus(c+649,"test_top exe0 s_l_mem_data_o", false,-1, 31,0);
        vcdp->declBus(c+657,"test_top exe0 s_l_mem_op_o", false,-1, 3,0);
        vcdp->declBus(c+1049,"test_top exe0 r_reg_wdata_o", false,-1, 31,0);
        vcdp->declBus(c+1089,"test_top exe0 s_l_reg_wdata_o", false,-1, 31,0);
        vcdp->declBit(c+1057,"test_top exe0 r_reg_we_o", false,-1);
        vcdp->declBit(c+665,"test_top exe0 s_l_reg_we_o", false,-1);
        vcdp->declBit(c+73,"test_top exe0 b_j_jump_enable_o", false,-1);
        vcdp->declBus(c+81,"test_top exe0 b_j_jump_addr_o", false,-1, 31,0);
        vcdp->declBit(c+1001,"test_top exe0 exe_type_r0 rst_i", false,-1);
        vcdp->declBus(c+737,"test_top exe0 exe_type_r0 op1_i", false,-1, 31,0);
        vcdp->declBus(c+745,"test_top exe0 exe_type_r0 op2_i", false,-1, 31,0);
        vcdp->declBus(c+769,"test_top exe0 exe_type_r0 inst_i", false,-1, 31,0);
        vcdp->declBus(c+761,"test_top exe0 exe_type_r0 reg_waddr_i", false,-1, 4,0);
        vcdp->declBus(c+1049,"test_top exe0 exe_type_r0 reg_wdata_o", false,-1, 31,0);
        vcdp->declBit(c+1057,"test_top exe0 exe_type_r0 reg_we_o", false,-1);
        vcdp->declBus(c+929,"test_top exe0 exe_type_r0 opcode", false,-1, 6,0);
        vcdp->declBus(c+937,"test_top exe0 exe_type_r0 funct3", false,-1, 2,0);
        vcdp->declBus(c+945,"test_top exe0 exe_type_r0 funct7", false,-1, 6,0);
        vcdp->declBit(c+89,"test_top exe0 exe_type_r0 isType_r", false,-1);
        vcdp->declBit(c+1001,"test_top exe0 exe_type_s_l0 rst_i", false,-1);
        vcdp->declBus(c+737,"test_top exe0 exe_type_s_l0 op1_i", false,-1, 31,0);
        vcdp->declBus(c+745,"test_top exe0 exe_type_s_l0 op2_i", false,-1, 31,0);
        vcdp->declBus(c+769,"test_top exe0 exe_type_s_l0 inst_i", false,-1, 31,0);
        vcdp->declBus(c+1089,"test_top exe0 exe_type_s_l0 reg_wdata_o", false,-1, 31,0);
        vcdp->declBit(c+665,"test_top exe0 exe_type_s_l0 reg_we_o", false,-1);
        vcdp->declBus(c+641,"test_top exe0 exe_type_s_l0 mem_addr_o", false,-1, 31,0);
        vcdp->declBus(c+649,"test_top exe0 exe_type_s_l0 mem_data_o", false,-1, 31,0);
        vcdp->declBit(c+633,"test_top exe0 exe_type_s_l0 mem_we_o", false,-1);
        vcdp->declBus(c+657,"test_top exe0 exe_type_s_l0 mem_op_o", false,-1, 3,0);
        vcdp->declBus(c+929,"test_top exe0 exe_type_s_l0 opcode", false,-1, 6,0);
        vcdp->declBus(c+937,"test_top exe0 exe_type_s_l0 funct3", false,-1, 2,0);
        vcdp->declBus(c+961,"test_top exe0 exe_type_s_l0 load_addr_offset", false,-1, 31,0);
        vcdp->declBus(c+969,"test_top exe0 exe_type_s_l0 store_addr_offset", false,-1, 31,0);
        vcdp->declBit(c+1001,"test_top exe0 exe_type_b_j0 rst_i", false,-1);
        vcdp->declBus(c+769,"test_top exe0 exe_type_b_j0 inst_i", false,-1, 31,0);
        vcdp->declBus(c+777,"test_top exe0 exe_type_b_j0 inst_addr_i", false,-1, 31,0);
        vcdp->declBus(c+737,"test_top exe0 exe_type_b_j0 op1_i", false,-1, 31,0);
        vcdp->declBus(c+745,"test_top exe0 exe_type_b_j0 op2_i", false,-1, 31,0);
        vcdp->declBus(c+81,"test_top exe0 exe_type_b_j0 jump_addr_o", false,-1, 31,0);
        vcdp->declBit(c+73,"test_top exe0 exe_type_b_j0 jump_enable_o", false,-1);
        vcdp->declBus(c+929,"test_top exe0 exe_type_b_j0 opcode", false,-1, 6,0);
        vcdp->declBus(c+937,"test_top exe0 exe_type_b_j0 funct3", false,-1, 2,0);
        vcdp->declBit(c+97,"test_top exe0 exe_type_b_j0 op1_eq_op2", false,-1);
        vcdp->declBus(c+777,"test_top exe0 exe_type_b_j0 pc", false,-1, 31,0);
        vcdp->declBit(c+1001,"test_top exe_mem0 rst_i", false,-1);
        vcdp->declBit(c+1009,"test_top exe_mem0 clk_i", false,-1);
        vcdp->declBus(c+497,"test_top exe_mem0 reg_waddr_i", false,-1, 4,0);
        vcdp->declBit(c+505,"test_top exe_mem0 reg_we_i", false,-1);
        vcdp->declBus(c+513,"test_top exe_mem0 reg_wdata_i", false,-1, 31,0);
        vcdp->declBit(c+1025,"test_top exe_mem0 mem_we_i", false,-1);
        vcdp->declBus(c+521,"test_top exe_mem0 mem_addr_i", false,-1, 31,0);
        vcdp->declBus(c+1033,"test_top exe_mem0 mem_data_i", false,-1, 31,0);
        vcdp->declBus(c+1041,"test_top exe_mem0 mem_op_i", false,-1, 3,0);
        vcdp->declBus(c+377,"test_top exe_mem0 stall_i", false,-1, 5,0);
        vcdp->declBit(c+809,"test_top exe_mem0 mem_we_o", false,-1);
        vcdp->declBus(c+817,"test_top exe_mem0 mem_addr_o", false,-1, 31,0);
        vcdp->declBus(c+825,"test_top exe_mem0 mem_data_o", false,-1, 31,0);
        vcdp->declBus(c+833,"test_top exe_mem0 mem_op_o", false,-1, 3,0);
        vcdp->declBus(c+785,"test_top exe_mem0 reg_waddr_o", false,-1, 4,0);
        vcdp->declBit(c+793,"test_top exe_mem0 reg_we_o", false,-1);
        vcdp->declBus(c+801,"test_top exe_mem0 reg_wdata_o", false,-1, 31,0);
        vcdp->declBit(c+1001,"test_top mem0 rst_i", false,-1);
        vcdp->declBit(c+1009,"test_top mem0 clk_i", false,-1);
        vcdp->declBus(c+785,"test_top mem0 reg_waddr_i", false,-1, 4,0);
        vcdp->declBit(c+793,"test_top mem0 reg_we_i", false,-1);
        vcdp->declBus(c+801,"test_top mem0 reg_wdata_i", false,-1, 31,0);
        vcdp->declBus(c+585,"test_top mem0 ram_data_i", false,-1, 31,0);
        vcdp->declBit(c+809,"test_top mem0 mem_we_i", false,-1);
        vcdp->declBus(c+817,"test_top mem0 mem_addr_i", false,-1, 31,0);
        vcdp->declBus(c+825,"test_top mem0 mem_data_i", false,-1, 31,0);
        vcdp->declBus(c+833,"test_top mem0 mem_op_i", false,-1, 3,0);
        vcdp->declBus(c+561,"test_top mem0 ram_addr_o", false,-1, 31,0);
        vcdp->declBit(c+569,"test_top mem0 ram_w_request_o", false,-1);
        vcdp->declBus(c+577,"test_top mem0 ram_data_o", false,-1, 31,0);
        vcdp->declBus(c+537,"test_top mem0 reg_waddr_o", false,-1, 4,0);
        vcdp->declBit(c+545,"test_top mem0 reg_we_o", false,-1);
        vcdp->declBus(c+553,"test_top mem0 reg_wdata_o", false,-1, 31,0);
        vcdp->declBit(c+689,"test_top mem0 halt_o", false,-1);
        vcdp->declBus(c+977,"test_top mem0 ram_addr_offset", false,-1, 1,0);
        vcdp->declBit(c+1001,"test_top mem_wb0 rst_i", false,-1);
        vcdp->declBit(c+1009,"test_top mem_wb0 clk_i", false,-1);
        vcdp->declBus(c+537,"test_top mem_wb0 reg_waddr_i", false,-1, 4,0);
        vcdp->declBit(c+545,"test_top mem_wb0 reg_we_i", false,-1);
        vcdp->declBus(c+553,"test_top mem_wb0 reg_wdata_i", false,-1, 31,0);
        vcdp->declBus(c+377,"test_top mem_wb0 stall_i", false,-1, 5,0);
        vcdp->declBus(c+841,"test_top mem_wb0 reg_waddr_o", false,-1, 4,0);
        vcdp->declBit(c+849,"test_top mem_wb0 reg_we_o", false,-1);
        vcdp->declBus(c+857,"test_top mem_wb0 reg_wdata_o", false,-1, 31,0);
        vcdp->declBit(c+1009,"test_top dpram0 clk_i", false,-1);
        vcdp->declBit(c+1001,"test_top dpram0 rst_i", false,-1);
        vcdp->declBus(c+561,"test_top dpram0 addr_i", false,-1, 31,0);
        vcdp->declBit(c+569,"test_top dpram0 we_i", false,-1);
        vcdp->declBus(c+577,"test_top dpram0 data_i", false,-1, 31,0);
        vcdp->declBus(c+585,"test_top dpram0 data_o", false,-1, 31,0);
        vcdp->declBit(c+705,"test_top dpram0 inst_ce_i", false,-1);
        vcdp->declBus(c+697,"test_top dpram0 pc_i", false,-1, 31,0);
        vcdp->declBus(c+993,"test_top dpram0 inst_o", false,-1, 31,0);
        vcdp->declBit(c+673,"test_top dpram0 mem_e", false,-1);
        vcdp->declBus(c+681,"test_top dpram0 addr4", false,-1, 31,0);
        vcdp->declBus(c+985,"test_top dpram0 rom_addr4", false,-1, 31,0);
        vcdp->declBit(c+1009,"test_top regfile0 clk_i", false,-1);
        vcdp->declBit(c+1001,"test_top regfile0 rst_i", false,-1);
        vcdp->declBit(c+849,"test_top regfile0 we_i", false,-1);
        vcdp->declBus(c+841,"test_top regfile0 waddr_i", false,-1, 4,0);
        vcdp->declBus(c+857,"test_top regfile0 wdata_i", false,-1, 31,0);
        vcdp->declBit(c+465,"test_top regfile0 re1_i", false,-1);
        vcdp->declBus(c+449,"test_top regfile0 raddr1_i", false,-1, 4,0);
        vcdp->declBit(c+473,"test_top regfile0 re2_i", false,-1);
        vcdp->declBus(c+457,"test_top regfile0 raddr2_i", false,-1, 4,0);
        vcdp->declBus(c+481,"test_top regfile0 rdata1_o", false,-1, 31,0);
        vcdp->declBus(c+489,"test_top regfile0 rdata2_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+105+i*1,"test_top regfile0 regs", true,(i+0), 31,0);}}
        vcdp->declBus(c+1,"test_top regfile0 i", false,-1, 31,0);
    }
}

void Vtest_top::traceFullThis__1(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
        vcdp->fullBus(c+9,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o),32);
        vcdp->fullBus(c+17,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                              ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0xfU))
                              : 0U)),5);
        vcdp->fullBus(c+25,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                              ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0x14U))
                              : 0U)),5);
        vcdp->fullBit(c+33,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
        vcdp->fullBit(c+41,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
        vcdp->fullBit(c+49,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
        vcdp->fullBus(c+57,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                              ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 7U)) : 0U)),5);
        vcdp->fullBit(c+65,(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
        vcdp->fullBit(c+73,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_enable_o));
        vcdp->fullBus(c+81,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_addr_o),32);
        vcdp->fullBit(c+89,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
        vcdp->fullBit(c+97,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
        vcdp->fullBus(c+105,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
        vcdp->fullBus(c+106,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
        vcdp->fullBus(c+107,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
        vcdp->fullBus(c+108,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
        vcdp->fullBus(c+109,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
        vcdp->fullBus(c+110,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
        vcdp->fullBus(c+111,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
        vcdp->fullBus(c+112,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
        vcdp->fullBus(c+113,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
        vcdp->fullBus(c+114,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
        vcdp->fullBus(c+115,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
        vcdp->fullBus(c+116,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
        vcdp->fullBus(c+117,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
        vcdp->fullBus(c+118,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
        vcdp->fullBus(c+119,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
        vcdp->fullBus(c+120,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
        vcdp->fullBus(c+121,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
        vcdp->fullBus(c+122,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
        vcdp->fullBus(c+123,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
        vcdp->fullBus(c+124,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
        vcdp->fullBus(c+125,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
        vcdp->fullBus(c+126,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
        vcdp->fullBus(c+127,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
        vcdp->fullBus(c+128,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
        vcdp->fullBus(c+129,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
        vcdp->fullBus(c+130,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
        vcdp->fullBus(c+131,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
        vcdp->fullBus(c+132,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
        vcdp->fullBus(c+133,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
        vcdp->fullBus(c+134,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
        vcdp->fullBus(c+135,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
        vcdp->fullBus(c+136,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
        vcdp->fullBus(c+361,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                               : 0U)),32);
        vcdp->fullBus(c+369,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                               : 0U)),32);
        vcdp->fullBus(c+377,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
        vcdp->fullBit(c+385,(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o));
        vcdp->fullBus(c+393,(vlSymsp->TOP__test_top.__PVT__exe_jump_addr_o),32);
        vcdp->fullBus(c+401,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
        vcdp->fullBus(c+409,(vlSymsp->TOP__test_top.__PVT__id_inst_addr_o),32);
        vcdp->fullBus(c+417,(vlSymsp->TOP__test_top.__PVT__id_op1_o),32);
        vcdp->fullBus(c+425,(vlSymsp->TOP__test_top.__PVT__id_op2_o),32);
        vcdp->fullBit(c+433,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
        vcdp->fullBus(c+441,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
        vcdp->fullBus(c+449,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        vcdp->fullBus(c+457,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
        vcdp->fullBit(c+465,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
        vcdp->fullBit(c+473,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
        vcdp->fullBus(c+481,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
        vcdp->fullBus(c+489,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
        vcdp->fullBus(c+497,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
        vcdp->fullBit(c+505,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
        vcdp->fullBus(c+513,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
        vcdp->fullBus(c+521,(vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o),32);
        vcdp->fullBit(c+529,(vlSymsp->TOP__test_top.__PVT__exe_stallreq_o));
        vcdp->fullBus(c+537,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
        vcdp->fullBit(c+545,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
        vcdp->fullBus(c+553,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
        vcdp->fullBus(c+561,(vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o),32);
        vcdp->fullBit(c+569,(vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o));
        vcdp->fullBus(c+577,(vlSymsp->TOP__test_top.__PVT__mem_ram_data_o),32);
        vcdp->fullBus(c+585,(vlSymsp->TOP__test_top__dpram0.__PVT__data_o),32);
        vcdp->fullBus(c+593,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
        vcdp->fullBus(c+601,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
        vcdp->fullBus(c+609,(vlSymsp->TOP__test_top.__PVT__id0__DOT__come_which1),2);
        vcdp->fullBus(c+617,(vlSymsp->TOP__test_top.__PVT__id0__DOT__come_which2),2);
        vcdp->fullBus(c+625,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_inst_o)),7);
        vcdp->fullBit(c+633,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_we_o));
        vcdp->fullBus(c+641,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_addr_o),32);
        vcdp->fullBus(c+649,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_data_o),32);
        vcdp->fullBus(c+657,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_op_o),4);
        vcdp->fullBit(c+665,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o));
        vcdp->fullBit(c+673,(((0U == vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)
                               ? 0U : 1U)));
        vcdp->fullBus(c+681,((0xfffffffcU & vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)),32);
        vcdp->fullBit(c+689,(vlSymsp->TOP__test_top.__PVT__mem_halt_o));
        vcdp->fullBus(c+697,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
        vcdp->fullBit(c+705,(vlSymsp->TOP__test_top.__PVT__ce_wire));
        vcdp->fullBus(c+713,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
        vcdp->fullBus(c+721,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
        vcdp->fullBit(c+729,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                              & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0xfU)) 
                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                                 | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                              >> 0x14U)) 
                                    == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
        vcdp->fullBus(c+737,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
        vcdp->fullBus(c+745,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
        vcdp->fullBit(c+753,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
        vcdp->fullBus(c+761,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
        vcdp->fullBus(c+769,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
        vcdp->fullBus(c+777,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),32);
        vcdp->fullBus(c+785,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
        vcdp->fullBit(c+793,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
        vcdp->fullBus(c+801,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
        vcdp->fullBit(c+809,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
        vcdp->fullBus(c+817,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
        vcdp->fullBus(c+825,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
        vcdp->fullBus(c+833,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
        vcdp->fullBus(c+841,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
        vcdp->fullBit(c+849,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
        vcdp->fullBus(c+857,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
        vcdp->fullBus(c+865,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
        vcdp->fullBit(c+873,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
        vcdp->fullBus(c+881,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
        vcdp->fullBus(c+889,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 0xfU))),5);
        vcdp->fullBus(c+897,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 7U))),5);
        vcdp->fullBus(c+905,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 0x14U))),5);
        vcdp->fullBus(c+913,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                    >> 0xcU))),3);
        vcdp->fullBus(c+921,((0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 0x19U))),7);
        vcdp->fullBus(c+929,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
        vcdp->fullBus(c+937,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                    >> 0xcU))),3);
        vcdp->fullBus(c+945,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                       >> 0x19U))),7);
        vcdp->fullBus(c+953,((0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                       >> 0x14U))),5);
        vcdp->fullBus(c+961,(((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | (0xfffU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U)))),32);
        vcdp->fullBus(c+969,(((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                      >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0xfe0U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 7U))))),32);
        vcdp->fullBus(c+977,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
        vcdp->fullBus(c+985,((0xfffffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),32);
        vcdp->fullBus(c+993,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                               ? ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                   [(0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                   << 0x18U) | ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                 [(0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                               : 0U)),32);
        vcdp->fullBit(c+1001,(vlTOPp->rst_i));
        vcdp->fullBit(c+1009,(vlTOPp->clk_i));
        vcdp->fullBit(c+1017,(vlTOPp->halt_o));
        vcdp->fullBit(c+1025,(((~ (IData)(vlTOPp->rst_i)) 
                               & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                      >> 6U)) & ((0x20U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((~ 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 4U)) 
                                                  & ((~ 
                                                      (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                            >> 1U) 
                                                           & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                              & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_we_o))))))
                                                  : 
                                                 ((~ 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 4U)) 
                                                  & ((~ 
                                                      (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       >> 3U)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 2U)) 
                                                        & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                            >> 1U) 
                                                           & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                              & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_we_o)))))))))));
        vcdp->fullBus(c+1033,(((IData)(vlTOPp->rst_i)
                                ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? 0U : ((0x20U 
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
        vcdp->fullBus(c+1041,(((IData)(vlTOPp->rst_i)
                                ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? 0U : ((0x20U 
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
        vcdp->fullBus(c+1049,(((1U & ((IData)(vlTOPp->rst_i) 
                                      | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
                                ? 0U : ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? ((0x2000U 
                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                 : 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                                             : ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                      >> 0x19U)))
                                                  ? 
                                                 (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                                                  : 
                                                 VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, 
                                                                (0x1fU 
                                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))
                                                 : 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))
                                         : ((0x2000U 
                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                  < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (VL_LTS_III(1,32,32, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                  ? 1U
                                                  : 0U))
                                             : ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 
                                                (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                 << 
                                                 (0x1fU 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
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
        vcdp->fullBit(c+1057,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                        | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))))));
        vcdp->fullBus(c+1065,(0U),5);
        vcdp->fullBit(c+1073,(1U));
        vcdp->fullBit(c+1081,(0U));
        vcdp->fullBus(c+1089,(0U),32);
    }
}
