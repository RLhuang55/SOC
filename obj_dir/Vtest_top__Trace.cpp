// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


void Vtest_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtest_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
            tracep->chgBit(oldp+2,(vlSymsp->TOP__test_top.__PVT__ce_wire));
            tracep->chgIData(oldp+3,(vlSymsp->TOP__test_top__rom0.__PVT__inst_o),32);
            tracep->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
            tracep->chgBit(oldp+8,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
            tracep->chgCData(oldp+9,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
            tracep->chgCData(oldp+11,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
            tracep->chgBit(oldp+12,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
            tracep->chgIData(oldp+13,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
            tracep->chgBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
            tracep->chgIData(oldp+15,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
            tracep->chgIData(oldp+16,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
            tracep->chgCData(oldp+17,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
            tracep->chgCData(oldp+18,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
            tracep->chgBit(oldp+19,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
            tracep->chgIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
            tracep->chgBit(oldp+21,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                                     & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0xfU)) 
                                         == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                                        | ((0x1fU & 
                                            (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0x14U)) 
                                           == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
            tracep->chgCData(oldp+22,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
            tracep->chgBit(oldp+23,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
            tracep->chgCData(oldp+24,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
            tracep->chgCData(oldp+25,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0xfU))
                                        : 0U)),5);
            tracep->chgCData(oldp+26,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U))
                                        : 0U)),5);
            tracep->chgBit(oldp+27,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
            tracep->chgBit(oldp+29,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
            tracep->chgCData(oldp+30,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U))
                                        : 0U)),5);
            tracep->chgCData(oldp+31,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 7U))),5);
            tracep->chgCData(oldp+32,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+33,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+34,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+35,((0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x19U))),7);
            tracep->chgBit(oldp+36,(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
            tracep->chgCData(oldp+37,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
            tracep->chgCData(oldp+38,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+39,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+40,((0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0x14U))),5);
            tracep->chgIData(oldp+41,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),32);
            tracep->chgBit(oldp+42,(((0x33U == (0x7fU 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                                     & ((0U == (0x7fU 
                                                & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                   >> 0x19U))) 
                                        | (0x20U == 
                                           (0x7fU & 
                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0x19U)))))));
            tracep->chgIData(oldp+43,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | (0xfffU & 
                                          (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U)))),32);
            tracep->chgIData(oldp+44,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | ((0xfe0U & 
                                           (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 0x14U)) 
                                          | (0x1fU 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 7U))))),32);
            tracep->chgCData(oldp+45,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
            tracep->chgIData(oldp+46,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
            tracep->chgIData(oldp+47,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
            tracep->chgIData(oldp+48,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
            tracep->chgIData(oldp+49,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
            tracep->chgIData(oldp+50,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
            tracep->chgIData(oldp+51,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
            tracep->chgIData(oldp+52,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
            tracep->chgIData(oldp+54,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
            tracep->chgIData(oldp+55,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
            tracep->chgIData(oldp+56,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
            tracep->chgIData(oldp+57,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
            tracep->chgIData(oldp+58,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
            tracep->chgIData(oldp+59,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
            tracep->chgIData(oldp+60,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
            tracep->chgIData(oldp+61,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
            tracep->chgIData(oldp+62,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
            tracep->chgIData(oldp+63,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
            tracep->chgIData(oldp+64,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
            tracep->chgIData(oldp+65,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
            tracep->chgIData(oldp+66,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
            tracep->chgIData(oldp+67,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
            tracep->chgIData(oldp+68,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
            tracep->chgIData(oldp+69,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
            tracep->chgIData(oldp+70,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
            tracep->chgIData(oldp+71,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
            tracep->chgIData(oldp+72,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
            tracep->chgIData(oldp+73,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
            tracep->chgIData(oldp+74,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
            tracep->chgIData(oldp+75,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
            tracep->chgIData(oldp+76,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
            tracep->chgIData(oldp+77,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
            tracep->chgIData(oldp+78,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+79,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
            tracep->chgIData(oldp+80,(vlSymsp->TOP__test_top.__PVT__id_op1_o),32);
            tracep->chgIData(oldp+81,(vlSymsp->TOP__test_top.__PVT__id_op2_o),32);
            tracep->chgBit(oldp+82,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
            tracep->chgCData(oldp+83,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
            tracep->chgCData(oldp+84,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
            tracep->chgCData(oldp+85,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
            tracep->chgBit(oldp+86,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
            tracep->chgBit(oldp+87,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
            tracep->chgIData(oldp+88,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
            tracep->chgIData(oldp+89,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
            tracep->chgBit(oldp+91,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
            tracep->chgIData(oldp+92,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
            tracep->chgBit(oldp+93,(vlSymsp->TOP__test_top.__PVT__exe_mem_we_o));
            tracep->chgIData(oldp+94,(vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o),32);
            tracep->chgIData(oldp+95,(vlSymsp->TOP__test_top.__PVT__exe_mem_data_o),32);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__test_top.__PVT__exe_mem_op_o),4);
            tracep->chgCData(oldp+97,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
            tracep->chgBit(oldp+98,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
            tracep->chgIData(oldp+99,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
            tracep->chgIData(oldp+100,(vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o),32);
            tracep->chgBit(oldp+101,(vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o));
            tracep->chgIData(oldp+102,(vlSymsp->TOP__test_top.__PVT__mem_ram_data_o),32);
            tracep->chgIData(oldp+103,(vlSymsp->TOP__test_top.__PVT__mem_ram_data_i),32);
            tracep->chgCData(oldp+104,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
            tracep->chgIData(oldp+105,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
            tracep->chgCData(oldp+107,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o),5);
            tracep->chgCData(oldp+108,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o),5);
            tracep->chgBit(oldp+109,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o));
            tracep->chgBit(oldp+110,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o));
            tracep->chgIData(oldp+111,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o),32);
            tracep->chgIData(oldp+112,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o),32);
            tracep->chgBit(oldp+113,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o));
            tracep->chgCData(oldp+114,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o),5);
            tracep->chgCData(oldp+115,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_inst_o)),7);
            tracep->chgIData(oldp+116,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o),32);
            tracep->chgBit(oldp+117,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o));
            tracep->chgIData(oldp+119,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_o),32);
        }
        tracep->chgBit(oldp+120,(vlTOPp->rst_i));
        tracep->chgBit(oldp+121,(vlTOPp->clk_i));
        tracep->chgIData(oldp+122,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                     ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                     : 0U)),32);
        tracep->chgIData(oldp+123,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                     ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                     : 0U)),32);
    }
}

void Vtest_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtest_top__Syms* __restrict vlSymsp = static_cast<Vtest_top__Syms*>(userp);
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
