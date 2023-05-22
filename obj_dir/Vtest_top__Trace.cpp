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
            tracep->chgBit(oldp+1,(vlSymsp->TOP__test_top.__PVT__mem_halt_o));
            tracep->chgIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
            tracep->chgBit(oldp+3,(vlSymsp->TOP__test_top.__PVT__ce_wire));
            tracep->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
            tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                                    & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 0xfU)) 
                                        == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                                       | ((0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U)) 
                                          == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
            tracep->chgIData(oldp+7,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
            tracep->chgBit(oldp+9,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
            tracep->chgCData(oldp+10,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
            tracep->chgIData(oldp+11,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),32);
            tracep->chgCData(oldp+13,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
            tracep->chgBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
            tracep->chgIData(oldp+15,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
            tracep->chgBit(oldp+16,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
            tracep->chgIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
            tracep->chgIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
            tracep->chgCData(oldp+19,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
            tracep->chgCData(oldp+20,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
            tracep->chgBit(oldp+21,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
            tracep->chgIData(oldp+22,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
            tracep->chgCData(oldp+23,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
            tracep->chgBit(oldp+24,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
            tracep->chgCData(oldp+25,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
            tracep->chgCData(oldp+26,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0xfU))),5);
            tracep->chgIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o),32);
            tracep->chgCData(oldp+28,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 7U))),5);
            tracep->chgCData(oldp+29,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0xfU))
                                        : 0U)),5);
            tracep->chgCData(oldp+30,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U))
                                        : 0U)),5);
            tracep->chgBit(oldp+31,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
            tracep->chgCData(oldp+34,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                        ? (0x1fU & 
                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U))
                                        : 0U)),5);
            tracep->chgCData(oldp+35,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+36,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+37,((0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x19U))),7);
            tracep->chgBit(oldp+38,(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
            tracep->chgCData(oldp+39,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
            tracep->chgCData(oldp+40,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+41,((0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+42,((0x1fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+43,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_enable_o));
            tracep->chgIData(oldp+44,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_addr_o),32);
            tracep->chgBit(oldp+45,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r));
            tracep->chgIData(oldp+46,(((0xfffff000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 0x1fU)))) 
                                           << 0xcU)) 
                                       | (0xfffU & 
                                          (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U)))),32);
            tracep->chgIData(oldp+47,(((0xfffff000U 
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
            tracep->chgBit(oldp+48,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2));
            tracep->chgCData(oldp+49,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
            tracep->chgIData(oldp+50,((0xfffffffcU 
                                       & vlSymsp->TOP__test_top.__PVT__pc_wire)),32);
            tracep->chgIData(oldp+51,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
            tracep->chgIData(oldp+52,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
            tracep->chgIData(oldp+54,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
            tracep->chgIData(oldp+55,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
            tracep->chgIData(oldp+56,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
            tracep->chgIData(oldp+57,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
            tracep->chgIData(oldp+58,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
            tracep->chgIData(oldp+59,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
            tracep->chgIData(oldp+60,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
            tracep->chgIData(oldp+61,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
            tracep->chgIData(oldp+62,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
            tracep->chgIData(oldp+63,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
            tracep->chgIData(oldp+64,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
            tracep->chgIData(oldp+65,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
            tracep->chgIData(oldp+66,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
            tracep->chgIData(oldp+67,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
            tracep->chgIData(oldp+68,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
            tracep->chgIData(oldp+69,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
            tracep->chgIData(oldp+70,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
            tracep->chgIData(oldp+71,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
            tracep->chgIData(oldp+72,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
            tracep->chgIData(oldp+73,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
            tracep->chgIData(oldp+74,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
            tracep->chgIData(oldp+75,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
            tracep->chgIData(oldp+76,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
            tracep->chgIData(oldp+77,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
            tracep->chgIData(oldp+78,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
            tracep->chgIData(oldp+79,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
            tracep->chgIData(oldp+80,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
            tracep->chgIData(oldp+81,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
            tracep->chgIData(oldp+82,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+83,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
            tracep->chgBit(oldp+84,(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o));
            tracep->chgIData(oldp+85,(vlSymsp->TOP__test_top.__PVT__exe_jump_addr_o),32);
            tracep->chgIData(oldp+86,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
            tracep->chgIData(oldp+87,(vlSymsp->TOP__test_top.__PVT__id_inst_addr_o),32);
            tracep->chgBit(oldp+88,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
            tracep->chgCData(oldp+89,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
            tracep->chgCData(oldp+91,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
            tracep->chgBit(oldp+92,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
            tracep->chgIData(oldp+94,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
            tracep->chgIData(oldp+95,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
            tracep->chgBit(oldp+97,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
            tracep->chgIData(oldp+98,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
            tracep->chgCData(oldp+99,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
            tracep->chgBit(oldp+100,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
            tracep->chgIData(oldp+101,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
            tracep->chgIData(oldp+102,(vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o),32);
            tracep->chgBit(oldp+103,(vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o));
            tracep->chgIData(oldp+104,(vlSymsp->TOP__test_top.__PVT__mem_ram_data_o),32);
            tracep->chgIData(oldp+105,(vlSymsp->TOP__test_top__dpram0.__PVT__data_o),32);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
            tracep->chgIData(oldp+107,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
            tracep->chgCData(oldp+108,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_inst_o)),7);
            tracep->chgBit(oldp+109,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_we_o));
            tracep->chgIData(oldp+110,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_addr_o),32);
            tracep->chgIData(oldp+111,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_data_o),32);
            tracep->chgCData(oldp+112,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_op_o),4);
            tracep->chgBit(oldp+113,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o));
            tracep->chgBit(oldp+114,((0U != vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)));
            tracep->chgIData(oldp+115,((0xfffffffcU 
                                        & vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)),32);
        }
        tracep->chgBit(oldp+116,(vlTOPp->rst_i));
        tracep->chgBit(oldp+117,(vlTOPp->clk_i));
        tracep->chgBit(oldp+118,(vlTOPp->halt_o));
        tracep->chgIData(oldp+119,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                     ? ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                         [(0x1fffcU 
                                           & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                         << 0x18U) 
                                        | ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x1fffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                            << 0x10U) 
                                           | ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                               [(0x1ffffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x1fffcU 
                                                     & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                               << 8U) 
                                              | vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                              [(0x1ffffU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0x1fffcU 
                                                    & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                                     : 0U)),32);
        tracep->chgIData(oldp+120,(((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                      & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                     & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                        == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                     ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                     : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                          & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                         & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                            == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                         ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                         : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                               & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                              & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o) 
                                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))) 
                                             & (0U 
                                                != (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)))
                                             ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                             : ((IData)(vlTOPp->rst_i)
                                                 ? 0U
                                                 : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final))))),32);
        tracep->chgIData(oldp+121,(((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                      & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                     & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                        == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                     ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                     : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                          & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                         & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                            == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                         ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                         : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                               & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                                              & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o) 
                                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))) 
                                             & (0U 
                                                != (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)))
                                             ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                             : ((IData)(vlTOPp->rst_i)
                                                 ? 0U
                                                 : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final))))),32);
        tracep->chgBit(oldp+122,(((~ (IData)(vlTOPp->rst_i)) 
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
        tracep->chgIData(oldp+123,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
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
                                               : ((0x10U 
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
        tracep->chgIData(oldp+124,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
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
                                               : ((0x10U 
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
        tracep->chgCData(oldp+125,(((IData)(vlTOPp->rst_i)
                                     ? 0U : ((0x40U 
                                              & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? 0U : 
                                             ((0x20U 
                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((0x10U 
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
                                               : ((0x10U 
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
        tracep->chgIData(oldp+126,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                     ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                     : 0U)),32);
        tracep->chgIData(oldp+127,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                     ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                     : 0U)),32);
        tracep->chgIData(oldp+128,(((1U & ((IData)(vlTOPp->rst_i) 
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
                                                  ? 
                                                 ((0x1000U 
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
                                                  : 
                                                 ((0x1000U 
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
        tracep->chgBit(oldp+129,((1U & (~ ((IData)(vlTOPp->rst_i) 
                                           | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r)))))));
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
