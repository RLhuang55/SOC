// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_test_top.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__id_exe_inst_is_load_o;
    CData/*4:0*/ __Vdly__id_exe_rd_o;
    IData/*31:0*/ __Vdly__pc_wire;
    IData/*31:0*/ __Vdly__id_exe_inst_o;
    IData/*31:0*/ __Vtemp7;
    // Body
    __Vdly__pc_wire = vlSymsp->TOP__test_top.__PVT__pc_wire;
    __Vdly__id_exe_rd_o = vlSymsp->TOP__test_top.__PVT__id_exe_rd_o;
    __Vdly__id_exe_inst_is_load_o = vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o;
    __Vdly__id_exe_inst_o = vlSymsp->TOP__test_top.__PVT__id_exe_inst_o;
    vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o));
    vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o 
        = ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
    vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o);
    __Vdly__pc_wire = ((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                        ? ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o))
                            ? vlSymsp->TOP__test_top.__PVT__pc_wire
                            : ((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                                ? vlSymsp->TOP__test_top.__PVT__exe_jump_addr_o
                                : ((IData)(4U) + vlSymsp->TOP__test_top.__PVT__pc_wire)))
                        : 0U);
    vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                  >> 2U) 
                                                 & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                    >> 3U)))
                                           ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                           : ((1U & 
                                               (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                 >> 2U) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                    >> 3U))))
                                               ? 0U
                                               : ((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                                                   ? 0U
                                                   : (IData)(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o)))));
    vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o = 
        ((~ (IData)(vlTOPp->rst_i)) & ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                               >> 2U) 
                                              & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                 >> 3U)))
                                        ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)
                                        : ((~ (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                >> 2U) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                   >> 3U)))) 
                                           & ((~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)) 
                                              & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg_we_o)))));
    __Vdly__id_exe_rd_o = (0x1fU & (vlSymsp->TOP__test_top.__PVT__id_inst_o 
                                    >> 7U));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        __Vdly__id_exe_rd_o = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                 >> 3U)))
                                ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)
                                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                           >> 2U) & 
                                          (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                              >> 3U))))
                                    ? 0U : ((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                                             ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))));
    }
    __Vdly__id_exe_inst_is_load_o = (3U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_inst_o));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        __Vdly__id_exe_inst_is_load_o = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                 >> 2U) 
                                                & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                   >> 3U)))
                                          ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o)
                                          : ((~ (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                  >> 2U) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                     >> 3U)))) 
                                             & ((~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)) 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o))));
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 1U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 2U))) ? vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 1U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 2U)))) ? 0U
                    : ((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                        ? 0U : vlSymsp->TOP__test_top.__PVT__pc_wire)));
        vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 3U))) ? vlSymsp->TOP__test_top.__PVT__id_inst_addr_o
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 3U)))) ? 0U
                    : ((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                        ? 0U : vlSymsp->TOP__test_top.__PVT__id_inst_addr_o)));
    }
    vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((~ (IData)(vlTOPp->rst_i)) 
                                         & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 6U)) 
                                            & ((0x20U 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                ? (
                                                   (~ 
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
                                                : (
                                                   (~ 
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
                                                               & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_we_o))))))))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o = 0U;
        __Vdly__id_exe_inst_o = 0x13U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U 
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
                                                       : 0U)))))));
        __Vdly__id_exe_inst_o = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                         >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                   >> 3U)))
                                  ? vlSymsp->TOP__test_top.__PVT__id_exe_inst_o
                                  : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                             >> 2U) 
                                            & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                  >> 3U))))
                                      ? 0x13U : ((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                                                  ? 0x13U
                                                  : vlSymsp->TOP__test_top.__PVT__id_inst_o)));
    }
    vlSymsp->TOP__test_top.__PVT__mem_halt_o = (((3U 
                                                  == (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)) 
                                                 & (0x200008U 
                                                    == vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)) 
                                                | (IData)(vlSymsp->TOP__test_top.__PVT__mem_halt_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o = 0U;
        __Vtemp7 = 0x13U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 3U))) ? vlSymsp->TOP__test_top.__PVT__id_exe_op1_o
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 3U)))) ? 0U
                    : ((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                        ? 0U : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
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
                                         & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)))
                                         ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                         : ((IData)(vlTOPp->rst_i)
                                             ? 0U : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final)))))));
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 3U))) ? vlSymsp->TOP__test_top.__PVT__id_exe_op2_o
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 3U)))) ? 0U
                    : ((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                        ? 0U : ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
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
                                         & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)))
                                         ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                                         : ((IData)(vlTOPp->rst_i)
                                             ? 0U : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final)))))));
        __Vtemp7 = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                            >> 1U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                      >> 2U))) ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                     : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                >> 1U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                             >> 2U))))
                         ? 0x13U : ((IData)(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o)
                                     ? 0x13U : ((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                                 ? 
                                                ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                  [
                                                  (0x1fffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                                  << 0x18U) 
                                                 | ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (0x1fffcU 
                                                          & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                     << 0x10U) 
                                                    | ((vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x1fffcU 
                                                             & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                        << 8U) 
                                                       | vlSymsp->TOP__test_top__dpram0.__PVT__mem
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(3U) 
                                                           + 
                                                           (0x1fffcU 
                                                            & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                                                 : 0U))));
    }
    vlSymsp->TOP__test_top.__PVT__if_id_inst_o = __Vtemp7;
    vlSymsp->TOP__test_top.__PVT__id_exe_rd_o = __Vdly__id_exe_rd_o;
    vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o 
        = __Vdly__id_exe_inst_is_load_o;
    vlSymsp->TOP__test_top.__PVT__pc_wire = __Vdly__pc_wire;
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U 
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
                                                       : 0U)))))));
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o 
            = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U 
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
                                                       : 0U)))))));
    }
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2 
        = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
           == vlSymsp->TOP__test_top.__PVT__id_exe_op2_o);
    vlSymsp->TOP__test_top.__PVT__ce_wire = (1U & (~ (IData)(vlTOPp->rst_i)));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
        = ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
            ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U))))
                : ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? 0U : ((0xfffff000U & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                            | (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x14U)))))
            : ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U))) : ((0xfffff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 0x1fU)))) 
                                                     << 0xcU)) 
                                                 | (0xfffU 
                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x14U))))
                : ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? 0U : ((0xfffff000U & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                           >> 0x1fU)))) 
                                            << 0xcU)) 
                            | (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0x14U))))));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top.__PVT__id_exe_inst_o = __Vdly__id_exe_inst_o;
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o 
        = vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r;
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o 
        = vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r;
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o 
        = vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r;
    if ((0x63U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_addr_o 
            = ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                    ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? (vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 7U))))))
                        : (vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 7U)))))))
                    : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? (vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 7U))))))
                        : (vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o 
                           + ((0xfffff000U & ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 0x1fU)))) 
                                              << 0xcU)) 
                              | ((0x800U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                >> 7U))))))))
                : ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                    ? 0U : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? (vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o 
                                + ((0xfffff000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                  >> 0x1fU)))) 
                                                   << 0xcU)) 
                                   | ((0x800U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 7U))))))
                             : (vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o 
                                + ((0xfffff000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                  >> 0x1fU)))) 
                                                   << 0xcU)) 
                                   | ((0x800U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 << 4U)) 
                                      | ((0x7e0U & 
                                          (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U)) 
                                         | (0x1eU & 
                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                             >> 7U)))))))));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_enable_o 
            = (1U & ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                      ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                          ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                              ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                 >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                              : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                 < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))
                          : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                              ? VL_GTES_III(1,32,32, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                              : VL_LTS_III(1,32,32, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)))
                      : ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                             >> 0xdU)) & ((0x1000U 
                                           & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                           ? (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2))
                                           : (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_b_j0__DOT__op1_eq_op2)))));
    } else {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_addr_o 
            = ((0x6fU == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? (vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o 
                   + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                : ((0x67U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                    ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                       + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                    : 0U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_enable_o 
            = (1U & ((0x6fU == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                     | (0x67U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))));
    }
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x19U)))));
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o);
    vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o = 
        ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
    vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o));
}

VL_INLINE_OPT void Vtest_top_test_top::_combo__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_combo__TOP__test_top__5\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__id_inst_o = ((IData)(vlTOPp->rst_i)
                                                ? 0x13U
                                                : (
                                                   (0x40U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0x13U
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)
                                                        : 0x13U)
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U))))
                                                     : 0x13U)
                                                    : 
                                                   ((0x20U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0x13U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0x13U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0x13U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U))))
                                                     : 
                                                    ((0x10U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0x13U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)))
                                                      : 
                                                     ((8U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0x13U
                                                       : 
                                                      ((4U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 0x13U
                                                        : 
                                                       ((2U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                                          : 0x13U)
                                                         : 0x13U)))))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_inst_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_inst_addr_o = 0U;
        if ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                              >> 4U)))) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
                                }
                            }
                        }
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
                                }
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                                    vlSymsp->TOP__test_top.__PVT__id_inst_addr_o 
                                        = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__ctrl_stall_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__ctrl_stall_o 
            = ((IData)(vlSymsp->TOP__test_top.__PVT__exe_stallreq_o)
                ? 0xfU : (((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                           & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 0xfU)) 
                               == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                              | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0x14U)) 
                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))
                           ? 7U : 0U));
        vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o 
            = (0x1fU & ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                         ? ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                             ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                 ? 0U : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                              ? ((2U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 0U)
                                                  : 0U)
                                              : 0U)
                                          : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                              ? ((2U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                   : 0U)
                                                  : 0U)
                                              : 0U)))
                             : 0U) : ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                       ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 7U)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                           : 0U) : 
                                      ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                        ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                            ? 0U : 
                                           ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                             ? ((2U 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                 ? 
                                                ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 7U)
                                                  : 0U)
                                                 : 0U)
                                             : ((2U 
                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                 ? 
                                                ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 7U)
                                                  : 0U)
                                                 : 0U)))
                                        : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                            ? 0U : 
                                           ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                             ? 0U : 
                                            ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                  >> 7U)
                                                  : 0U)
                                              : 0U)))))));
        vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o 
            = (0x1fU & ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                         ? ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                             ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                 ? 0U : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U))))
                             : 0U) : ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                       ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0xfU)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                           : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U))))
                                       : ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)))
                                           : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)))))));
        vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o 
            = (0x1fU & ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                         ? ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                             ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                 ? 0U : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x14U)
                                                     : 0U)
                                                    : 0U))))
                             : 0U) : ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                       ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x14U)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                           : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x14U)
                                                     : 0U)
                                                    : 0U))))
                                       : 0U)));
    }
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (0x23U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_op_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_data_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_op_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? ((0U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                 >> 0xcU))) ? 1U : 
                   ((1U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                  >> 0xcU))) ? 2U : 
                    ((2U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                   >> 0xcU))) ? 3U : 0U)))
                : ((3U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                    ? ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? 0U : ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                     ? 0xdU : 0xcU))
                        : ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                ? 0U : 0xbU) : ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                 ? 0xaU
                                                 : 9U)))
                    : 0U));
        vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? 0U : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                             : 0U) : 0U)
                                     : 0U) : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)))
                    : 0U) : ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                              ? ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                  ? ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U)))
                                  : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U))))
                              : ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                  ? ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U)))
                                  : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? 0U
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U))))));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_addr_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                   + ((0xfffff000U & ((- (IData)((1U 
                                                  & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                     >> 0x1fU)))) 
                                      << 0xcU)) | (
                                                   (0xfe0U 
                                                    & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                         >> 7U)))))
                : ((3U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                    ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                       + ((0xfffff000U & ((- (IData)(
                                                     (1U 
                                                      & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                         >> 0x1fU)))) 
                                          << 0xcU)) 
                          | (0xfffU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                       >> 0x14U))))
                    : 0U));
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_mem_data_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? vlSymsp->TOP__test_top.__PVT__id_exe_op2_o
                : 0U);
    }
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((0x23U != 
                                          (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                                         & (3U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))));
    vlSymsp->TOP__test_top.__PVT__id_reg_we_o = (1U 
                                                 & ((~ (IData)(vlTOPp->rst_i)) 
                                                    & ((0x40U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                         >> 5U) 
                                                        & ((~ 
                                                            (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                             >> 4U)) 
                                                           & ((8U 
                                                               & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                               ? 
                                                              ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 2U) 
                                                               & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 1U) 
                                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))
                                                               : 
                                                              ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 2U) 
                                                               & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 1U) 
                                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))))
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 4U) 
                                                         & ((~ 
                                                             (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 3U)) 
                                                            & ((4U 
                                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                ? 
                                                               ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                : 
                                                               ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o))))))
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         ((~ 
                                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                            >> 3U)) 
                                                          & ((4U 
                                                              & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                              ? 
                                                             ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 1U) 
                                                              & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                              : 
                                                             ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 1U) 
                                                              & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))
                                                          : 
                                                         ((~ 
                                                           (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                            >> 3U)) 
                                                          & ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 2U)) 
                                                             & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 1U) 
                                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))))));
    vlSymsp->TOP__test_top.__PVT__id_reg1_re_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((0x40U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 5U) 
                                                         & ((~ 
                                                             (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 4U)) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 3U)) 
                                                               & ((4U 
                                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                   ? 
                                                                  ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                                   : 
                                                                  ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))))
                                                         : 
                                                        ((0x20U 
                                                          & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                          ? 
                                                         ((0x10U 
                                                           & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                           ? 
                                                          ((~ 
                                                            (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                             >> 3U)) 
                                                           & ((~ 
                                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 2U)) 
                                                              & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 1U) 
                                                                 & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o)))))
                                                           : 
                                                          ((~ 
                                                            (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                             >> 3U)) 
                                                           & ((~ 
                                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 2U)) 
                                                              & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 1U) 
                                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))
                                                          : 
                                                         ((0x10U 
                                                           & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                           ? 
                                                          ((~ 
                                                            (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                             >> 3U)) 
                                                           & ((~ 
                                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 2U)) 
                                                              & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 1U) 
                                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))
                                                           : 
                                                          ((~ 
                                                            (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                             >> 3U)) 
                                                           & ((~ 
                                                               (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                >> 2U)) 
                                                              & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 1U) 
                                                                 & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))))));
    vlSymsp->TOP__test_top.__PVT__id_reg2_re_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((0x40U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 5U) 
                                                         & ((~ 
                                                             (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                              >> 4U)) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 3U)) 
                                                               & ((~ 
                                                                   (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 2U)) 
                                                                  & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      >> 1U) 
                                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))))
                                                         : 
                                                        ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 5U) 
                                                         & ((0x10U 
                                                             & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                             ? 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o)))))
                                                             : 
                                                            ((~ 
                                                              (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                               >> 3U)) 
                                                             & ((~ 
                                                                 (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                  >> 2U)) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 1U) 
                                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))))));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top.__PVT__exe_jump_addr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? 0U : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_addr_o
                                             : 0U) : 0U)
                                     : 0U) : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_addr_o
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_addr_o
                                                    : 0U)
                                                   : 0U))))
                    : 0U) : 0U);
    }
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o 
            = ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                >> 6U) & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                           >> 5U) & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                         >> 4U)) & 
                                     ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                       ? ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 2U) & 
                                          ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 1U) 
                                           & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_enable_o))))
                                       : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                           ? ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 1U) 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_enable_o)))
                                           : ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 1U) 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_j_jump_enable_o))))))));
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                = ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? 0U : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? ((IData)(4U) 
                                                + vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o)
                                             : 0U) : 0U)
                                     : 0U) : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)))
                    : 0U);
        } else {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                    = ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                            ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                             : 0U) : 0U)
                                     : ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                             ? ((1U 
                                                 & ((IData)(vlTOPp->rst_i) 
                                                    | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? 
                                                 ((0x2000U 
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
                                                  : 
                                                 ((0x2000U 
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
                                                     - vlSymsp->TOP__test_top.__PVT__id_exe_op2_o))))))
                                             : 0U) : 0U)))
                        : 0U);
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                                = ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                    ? ((1U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                        ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                           + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                        : 0U) : 0U);
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                    if ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                        if ((0x2000U 
                                             & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                            vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                                                = (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                                    : 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o));
                                        } else {
                                            if ((0x1000U 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                                if (
                                                    (0U 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                         >> 0x19U)))) {
                                                    vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                                                        = 
                                                        (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                         >> 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 0x14U)));
                                                } else {
                                                    if (
                                                        (0x20U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 0x19U)))) {
                                                        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                                                            = 
                                                            VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__test_top.__PVT__id_exe_op1_o, 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                               >> 0x14U)));
                                                    }
                                                }
                                            } else {
                                                vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                                                    = 
                                                    (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                     ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o);
                                            }
                                        }
                                    } else {
                                        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o 
                                            = ((0x2000U 
                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                ? (
                                                   (0x1000U 
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
                                                : (
                                                   (0x1000U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    << 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                        >> 0x14U)))
                                                    : 
                                                   (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                    + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)));
                                    }
                                } else {
                                    vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o = 0U;
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o = 0U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o = 0U;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o = 0U;
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__mem_reg_we_o = ((IData)(vlTOPp->rst_i) 
                                                  | (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o = 
        ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o));
    vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((0x40U 
                                                         & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                         ? 
                                                        ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                          >> 5U) 
                                                         & ((~ 
                                                             (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                              >> 4U)) 
                                                            & ((8U 
                                                                & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                                ? 
                                                               ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                 >> 2U) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o))))
                                                                : 
                                                               ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                 >> 2U) 
                                                                & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)))))))
                                                         : 
                                                        ((0x20U 
                                                          & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((0x10U 
                                                           & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                           ? 
                                                          ((~ 
                                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 3U)) 
                                                           & ((4U 
                                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                               ? 
                                                              ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                >> 1U) 
                                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                  & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)))
                                                               : 
                                                              ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                >> 1U) 
                                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                  & (~ 
                                                                     ((IData)(vlTOPp->rst_i) 
                                                                      | (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__isType_r))))))))
                                                           : 
                                                          ((~ 
                                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 3U)) 
                                                           & ((~ 
                                                               (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                >> 2U)) 
                                                              & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                  >> 1U) 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o))))))
                                                          : 
                                                         ((0x10U 
                                                           & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                           ? 
                                                          ((~ 
                                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 3U)) 
                                                           & ((4U 
                                                               & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                               ? 
                                                              ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                >> 1U) 
                                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                  & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)))
                                                               : 
                                                              ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                >> 1U) 
                                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                  & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)))))
                                                           : 
                                                          ((~ 
                                                            (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                             >> 3U)) 
                                                           & ((~ 
                                                               (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                >> 2U)) 
                                                              & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                  >> 1U) 
                                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o))))))))));
}

VL_INLINE_OPT void Vtest_top_test_top::_combo__TOP__test_top__6(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_combo__TOP__test_top__6\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final = 0U;
        vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                        ? 0U : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                 ? ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                             ? vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o
                                             : 0U) : 0U)
                                     : 0U) : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                    : 0U)
                                                   : 0U))))
                    : 0U) : ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                              ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                  ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                     ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)))
                                  : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                    : 0U)
                                                   : 0U))))
                              : ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                  ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                    : 0U)
                                                   : 0U)))
                                  : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                    : 0U)
                                                   : 0U))))));
        vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                    ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                        ? 0U : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                 ? ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                     ? ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                         ? ((1U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                             ? ((0xfff00000U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   >> 0x1fU)))) 
                                                    << 0x14U)) 
                                                | ((0xff000U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o) 
                                                   | ((0x800U 
                                                       & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                            >> 0x14U)))))
                                             : 0U) : 0U)
                                     : 0U) : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0xfffff000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                       >> 0x1fU)))) 
                                                        << 0xcU)) 
                                                    | (0xfffU 
                                                       & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 0x14U)))
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                                    : 0U)
                                                   : 0U))))
                    : 0U) : ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                              ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                  ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                     ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)))
                                  : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? 0U
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                                    : 0U)
                                                   : 0U))))
                              : ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                  ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o
                                                    : 0U)
                                                   : 0U)))
                                  : 0U)));
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_ram_data_o = 0U;
    } else {
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                    vlSymsp->TOP__test_top.__PVT__mem_ram_data_o = 0U;
                }
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_ram_data_o = 0U;
                    }
                }
            }
        } else {
            vlSymsp->TOP__test_top.__PVT__mem_ram_data_o 
                = ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                    ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                             ? ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                                 ? vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o
                                 : ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                     ? ((0xffff0000U 
                                         & vlSymsp->TOP__test_top__dpram0.__PVT__data_o) 
                                        | (0xffffU 
                                           & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o))
                                     : ((0xffff0000U 
                                         & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o) 
                                        | (0xffffU 
                                           & vlSymsp->TOP__test_top__dpram0.__PVT__data_o))))
                             : ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                                 ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                     ? ((0xffffff00U 
                                         & vlSymsp->TOP__test_top__dpram0.__PVT__data_o) 
                                        | (0xffU & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o))
                                     : ((1U == (3U 
                                                & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                         ? ((0xffff0000U 
                                             & vlSymsp->TOP__test_top__dpram0.__PVT__data_o) 
                                            | ((0xff00U 
                                                & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & vlSymsp->TOP__test_top__dpram0.__PVT__data_o)))
                                         : ((2U == 
                                             (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                             ? ((0xff000000U 
                                                 & vlSymsp->TOP__test_top__dpram0.__PVT__data_o) 
                                                | ((0xff0000U 
                                                    & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                       << 0x10U)) 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP__test_top__dpram0.__PVT__data_o)))
                                             : ((0xff000000U 
                                                 & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                    << 0x18U)) 
                                                | (0xffffffU 
                                                   & vlSymsp->TOP__test_top__dpram0.__PVT__data_o)))))
                                 : 0U)));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o = 0U;
    } else {
        if ((8U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                = ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                    ? ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                        ? vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o
                        : ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                            ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? (0xffffU & vlSymsp->TOP__test_top__dpram0.__PVT__data_o)
                                : (0xffffU & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                              >> 0x10U)))
                            : ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? (0xffU & vlSymsp->TOP__test_top__dpram0.__PVT__data_o)
                                : ((1U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? (0xffU & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                >> 8U))
                                    : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                        ? (0xffU & 
                                           (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                            >> 0x10U))
                                        : (0xffU & 
                                           (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                            >> 0x18U)))))))
                    : ((2U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                        ? ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                            ? vlSymsp->TOP__test_top__dpram0.__PVT__data_o
                            : ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? ((0xffff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                                  >> 0xfU)))) 
                                                   << 0x10U)) 
                                   | (0xffffU & vlSymsp->TOP__test_top__dpram0.__PVT__data_o))
                                : ((0xffff0000U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                                  >> 0x1fU)))) 
                                                   << 0x10U)) 
                                   | (0xffffU & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                 >> 0x10U)))))
                        : ((1U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                            ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? ((0xffffff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                                  >> 7U)))) 
                                                   << 8U)) 
                                   | (0xffU & vlSymsp->TOP__test_top__dpram0.__PVT__data_o))
                                : ((1U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                    ? ((0xffffff00U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                          >> 0xfU)))) 
                                           << 8U)) 
                                       | (0xffU & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                   >> 8U)))
                                    : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                        ? ((0xffffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                              >> 0x17U)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                 >> 0x10U)))
                                        : ((0xffffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                              >> 0x1fU)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__test_top__dpram0.__PVT__data_o 
                                                 >> 0x18U))))))
                            : vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o)));
        } else {
            if ((4U & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                    = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o;
            } else {
                if ((1U & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o)))) {
                        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o;
                    }
                }
            }
        }
    }
}
