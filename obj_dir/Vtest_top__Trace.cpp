// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


//======================

void Vtest_top::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtest_top* t = (Vtest_top*)userthis;
    Vtest_top__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtest_top::traceChgThis(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtest_top::traceChgThis__2(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
    }
}

void Vtest_top::traceChgThis__3(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+9,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o),32);
        vcdp->chgBus(c+17,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                             ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0xfU)) : 0U)),5);
        vcdp->chgBus(c+25,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                             ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x14U))
                             : 0U)),5);
        vcdp->chgBit(c+33,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
        vcdp->chgBit(c+41,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
        vcdp->chgBit(c+49,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
        vcdp->chgBus(c+57,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                             ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 7U)) : 0U)),5);
        vcdp->chgBit(c+65,(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
        vcdp->chgBit(c+73,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_enable_o));
        vcdp->chgBus(c+81,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_addr_o),32);
        vcdp->chgBit(c+89,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
        vcdp->chgBit(c+97,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
        vcdp->chgBus(c+105,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
        vcdp->chgBus(c+106,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
        vcdp->chgBus(c+107,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
        vcdp->chgBus(c+108,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
        vcdp->chgBus(c+109,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
        vcdp->chgBus(c+110,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
        vcdp->chgBus(c+111,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
        vcdp->chgBus(c+112,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
        vcdp->chgBus(c+113,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
        vcdp->chgBus(c+114,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
        vcdp->chgBus(c+115,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
        vcdp->chgBus(c+116,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
        vcdp->chgBus(c+117,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
        vcdp->chgBus(c+118,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
        vcdp->chgBus(c+119,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
        vcdp->chgBus(c+120,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
        vcdp->chgBus(c+121,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
        vcdp->chgBus(c+122,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
        vcdp->chgBus(c+123,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
        vcdp->chgBus(c+124,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
        vcdp->chgBus(c+125,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
        vcdp->chgBus(c+126,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
        vcdp->chgBus(c+127,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
        vcdp->chgBus(c+128,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
        vcdp->chgBus(c+129,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
        vcdp->chgBus(c+130,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
        vcdp->chgBus(c+131,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
        vcdp->chgBus(c+132,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
        vcdp->chgBus(c+133,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
        vcdp->chgBus(c+134,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
        vcdp->chgBus(c+135,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
        vcdp->chgBus(c+136,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
    }
}

void Vtest_top::traceChgThis__4(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+361,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                              ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                              : 0U)),32);
        vcdp->chgBus(c+369,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                              ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                              : 0U)),32);
    }
}

void Vtest_top::traceChgThis__5(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+377,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
        vcdp->chgBit(c+385,(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o));
        vcdp->chgBus(c+393,(vlSymsp->TOP__test_top.__PVT__exe_jump_addr_o),32);
        vcdp->chgBus(c+401,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
        vcdp->chgBus(c+409,(vlSymsp->TOP__test_top.__PVT__id_inst_addr_o),32);
        vcdp->chgBus(c+417,(vlSymsp->TOP__test_top.__PVT__id_op1_o),32);
        vcdp->chgBus(c+425,(vlSymsp->TOP__test_top.__PVT__id_op2_o),32);
        vcdp->chgBit(c+433,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
        vcdp->chgBus(c+441,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
        vcdp->chgBus(c+449,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        vcdp->chgBus(c+457,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
        vcdp->chgBit(c+465,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
        vcdp->chgBit(c+473,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
        vcdp->chgBus(c+481,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
        vcdp->chgBus(c+489,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
        vcdp->chgBus(c+497,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
        vcdp->chgBit(c+505,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
        vcdp->chgBus(c+513,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
        vcdp->chgBus(c+521,(vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o),32);
        vcdp->chgBit(c+529,(vlSymsp->TOP__test_top.__PVT__exe_stallreq_o));
        vcdp->chgBus(c+537,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
        vcdp->chgBit(c+545,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
        vcdp->chgBus(c+553,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
        vcdp->chgBus(c+561,(vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o),32);
        vcdp->chgBit(c+569,(vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o));
        vcdp->chgBus(c+577,(vlSymsp->TOP__test_top.__PVT__mem_ram_data_o),32);
        vcdp->chgBus(c+585,(vlSymsp->TOP__test_top__dpram0.__PVT__data_o),32);
        vcdp->chgBus(c+593,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
        vcdp->chgBus(c+601,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
        vcdp->chgBus(c+609,(vlSymsp->TOP__test_top.__PVT__id0__DOT__come_which1),2);
        vcdp->chgBus(c+617,(vlSymsp->TOP__test_top.__PVT__id0__DOT__come_which2),2);
        vcdp->chgBus(c+625,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_inst_o)),7);
        vcdp->chgBit(c+633,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_we_o));
        vcdp->chgBus(c+641,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_addr_o),32);
        vcdp->chgBus(c+649,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_data_o),32);
        vcdp->chgBus(c+657,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_op_o),4);
        vcdp->chgBit(c+665,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o));
        vcdp->chgBit(c+673,(((0U == vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)
                              ? 0U : 1U)));
        vcdp->chgBus(c+681,((0xfffffffcU & vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)),32);
    }
}

void Vtest_top::traceChgThis__6(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+689,(vlSymsp->TOP__test_top.__PVT__mem_halt_o));
        vcdp->chgBus(c+697,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
        vcdp->chgBit(c+705,(vlSymsp->TOP__test_top.__PVT__ce_wire));
        vcdp->chgBus(c+713,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
        vcdp->chgBus(c+721,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
        vcdp->chgBit(c+729,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                             & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0xfU)) 
                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                                | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0x14U)) 
                                   == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
        vcdp->chgBus(c+737,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
        vcdp->chgBus(c+745,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
        vcdp->chgBit(c+753,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
        vcdp->chgBus(c+761,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
        vcdp->chgBus(c+769,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
        vcdp->chgBus(c+777,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),32);
        vcdp->chgBus(c+785,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
        vcdp->chgBit(c+793,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
        vcdp->chgBus(c+801,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
        vcdp->chgBit(c+809,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
        vcdp->chgBus(c+817,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
        vcdp->chgBus(c+825,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
        vcdp->chgBus(c+833,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
        vcdp->chgBus(c+841,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
        vcdp->chgBit(c+849,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
        vcdp->chgBus(c+857,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
        vcdp->chgBus(c+865,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
        vcdp->chgBit(c+873,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
        vcdp->chgBus(c+881,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
        vcdp->chgBus(c+889,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 0xfU))),5);
        vcdp->chgBus(c+897,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 7U))),5);
        vcdp->chgBus(c+905,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 0x14U))),5);
        vcdp->chgBus(c+913,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                   >> 0xcU))),3);
        vcdp->chgBus(c+921,((0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 0x19U))),7);
        vcdp->chgBus(c+929,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
        vcdp->chgBus(c+937,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                   >> 0xcU))),3);
        vcdp->chgBus(c+945,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                      >> 0x19U))),7);
        vcdp->chgBus(c+953,((0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                      >> 0x14U))),5);
        vcdp->chgBus(c+961,(((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                     >> 0x1fU)))) 
                                             << 0xcU)) 
                             | (0xfffU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                          >> 0x14U)))),32);
        vcdp->chgBus(c+969,(((0xfffff000U & (VL_NEGATE_I((IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                     >> 0x1fU)))) 
                                             << 0xcU)) 
                             | ((0xfe0U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 7U))))),32);
        vcdp->chgBus(c+977,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
        vcdp->chgBus(c+985,((0xfffffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),32);
    }
}

void Vtest_top::traceChgThis__7(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+993,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
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
    }
}

void Vtest_top::traceChgThis__8(Vtest_top__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1001,(vlTOPp->rst_i));
        vcdp->chgBit(c+1009,(vlTOPp->clk_i));
        vcdp->chgBit(c+1017,(vlTOPp->halt_o));
        vcdp->chgBit(c+1025,(((~ (IData)(vlTOPp->rst_i)) 
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
        vcdp->chgBus(c+1033,(((IData)(vlTOPp->rst_i)
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
        vcdp->chgBus(c+1041,(((IData)(vlTOPp->rst_i)
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
        vcdp->chgBus(c+1049,(((1U & ((IData)(vlTOPp->rst_i) 
                                     | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
                               ? 0U : ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                        ? ((0x2000U 
                                            & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                            ? ((0x1000U 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                   | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                                            : ((0x1000U 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                ? (
                                                   (0U 
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
                                                : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                   ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))
                                        : ((0x2000U 
                                            & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                            ? ((0x1000U 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                ? (
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   VL_LTS_III(1,32,32, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                    ? 1U
                                                    : 0U))
                                            : ((0x1000U 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                   << 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                                                : (
                                                   (0U 
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
        vcdp->chgBit(c+1057,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                       | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))))));
    }
}
