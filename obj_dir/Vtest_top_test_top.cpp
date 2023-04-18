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
    CData/*0:0*/ __Vdlyvset__ram0__DOT__mem__v0;
    IData/*31:0*/ __Vdly__if_id_inst_addr_o;
    IData/*31:0*/ __Vdly__if_id_inst_o;
    IData/*16:0*/ __Vdlyvdim0__ram0__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__ram0__DOT__mem__v0;
    // Body
    __Vdly__id_exe_rd_o = vlSymsp->TOP__test_top.__PVT__id_exe_rd_o;
    __Vdly__id_exe_inst_is_load_o = vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o;
    vlSymsp->TOP__test_top.__Vdly__pc_wire = vlSymsp->TOP__test_top.__PVT__pc_wire;
    __Vdly__if_id_inst_addr_o = vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o;
    __Vdlyvset__ram0__DOT__mem__v0 = 0U;
    __Vdly__if_id_inst_o = vlSymsp->TOP__test_top.__PVT__if_id_inst_o;
    vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_we_o));
    vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top.__PVT__exe_mem_data_o);
    __Vdly__id_exe_rd_o = (0x1fU & (vlSymsp->TOP__test_top.__PVT__id_inst_o 
                                    >> 7U));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                    >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                              >> 3U)))) {
            __Vdly__id_exe_rd_o = vlSymsp->TOP__test_top.__PVT__id_exe_rd_o;
        } else {
            if ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                        >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                     >> 3U))))) {
                __Vdly__id_exe_rd_o = 0U;
            }
        }
    }
    __Vdly__id_exe_inst_is_load_o = (3U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_inst_o));
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                    >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                              >> 3U)))) {
            __Vdly__id_exe_inst_is_load_o = vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o;
        } else {
            if ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                        >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                     >> 3U))))) {
                __Vdly__id_exe_inst_is_load_o = 0U;
            }
        }
    }
    vlSymsp->TOP__test_top.__Vdly__pc_wire = ((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                               ? ((IData)(4U) 
                                                  + vlSymsp->TOP__test_top.__PVT__pc_wire)
                                               : 0U);
    if (vlSymsp->TOP__test_top.__PVT__ce_wire) {
        if ((1U & (~ (IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o)))) {
            vlSymsp->TOP__test_top.__Vdly__pc_wire 
                = ((IData)(4U) + vlSymsp->TOP__test_top.__PVT__pc_wire);
        }
    } else {
        vlSymsp->TOP__test_top.__Vdly__pc_wire = 0U;
    }
    vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o));
    vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o 
        = ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o 
            = vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o;
        vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 3U))) ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 3U)))) ? 0U
                    : (IData)(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o)));
    }
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
                                           & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg_we_o))));
    if (vlTOPp->rst_i) {
        __Vdly__if_id_inst_addr_o = 0U;
        __Vdly__if_id_inst_addr_o = 0U;
    } else {
        __Vdly__if_id_inst_addr_o = vlSymsp->TOP__test_top.__PVT__pc_wire;
        __Vdly__if_id_inst_addr_o = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                             >> 1U) 
                                            & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                               >> 2U)))
                                      ? vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o
                                      : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                 >> 1U) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                    >> 2U))))
                                          ? 0U : vlSymsp->TOP__test_top.__PVT__pc_wire));
    }
    if (((IData)(vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o) 
         & (~ (IData)(vlTOPp->rst_i)))) {
        __Vdlyvval__ram0__DOT__mem__v0 = vlSymsp->TOP__test_top.__PVT__mem_ram_data_o;
        __Vdlyvset__ram0__DOT__mem__v0 = 1U;
        __Vdlyvdim0__ram0__DOT__mem__v0 = (0x1ffffU 
                                           & (vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o 
                                              >> 2U));
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_exe_inst_o = 0x13U;
        __Vdly__if_id_inst_o = 0x13U;
        __Vdly__if_id_inst_o = 0x13U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o;
        vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_op_o;
        vlSymsp->TOP__test_top.__PVT__id_exe_op2_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 3U))) ? vlSymsp->TOP__test_top.__PVT__id_exe_op2_o
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 3U)))) ? 0U
                    : vlSymsp->TOP__test_top.__PVT__id_op2_o));
        vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 3U))) ? vlSymsp->TOP__test_top.__PVT__id_exe_op1_o
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 3U)))) ? 0U
                    : vlSymsp->TOP__test_top.__PVT__id_op1_o));
        vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
            = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                       >> 2U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                 >> 3U))) ? vlSymsp->TOP__test_top.__PVT__id_exe_inst_o
                : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                           >> 2U) & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 3U)))) ? 0x13U
                    : vlSymsp->TOP__test_top.__PVT__id_inst_o));
        __Vdly__if_id_inst_o = vlSymsp->TOP__test_top__rom0.__PVT__inst_o;
        __Vdly__if_id_inst_o = ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                        >> 1U) & ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                  >> 2U)))
                                 ? vlSymsp->TOP__test_top.__PVT__if_id_inst_o
                                 : ((1U & (((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                            >> 1U) 
                                           & (~ ((IData)(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o) 
                                                 >> 2U))))
                                     ? 0x13U : vlSymsp->TOP__test_top__rom0.__PVT__inst_o));
    }
    vlSymsp->TOP__test_top.__PVT__id_exe_rd_o = __Vdly__id_exe_rd_o;
    vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o 
        = __Vdly__id_exe_inst_is_load_o;
    vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o 
        = __Vdly__if_id_inst_addr_o;
    if (__Vdlyvset__ram0__DOT__mem__v0) {
        vlSymsp->TOP__test_top.__PVT__ram0__DOT__mem[__Vdlyvdim0__ram0__DOT__mem__v0] 
            = __Vdlyvval__ram0__DOT__mem__v0;
    }
    vlSymsp->TOP__test_top.__PVT__if_id_inst_o = __Vdly__if_id_inst_o;
    vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
           & ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                               >> 0x19U))) | (0x20U 
                                              == (0x7fU 
                                                  & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                     >> 0x19U)))));
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o 
        = vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r;
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o 
        = vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r;
    vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o 
        = vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r;
}

VL_INLINE_OPT void Vtest_top_test_top::_sequent__TOP__test_top__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_sequent__TOP__test_top__2\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__pc_wire = vlSymsp->TOP__test_top.__Vdly__pc_wire;
    vlSymsp->TOP__test_top.__PVT__ce_wire = (1U & (~ (IData)(vlTOPp->rst_i)));
    vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o);
    vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o = 
        ((IData)(vlTOPp->rst_i) | (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
    vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o));
}

VL_INLINE_OPT void Vtest_top_test_top::_settle__TOP__test_top__4(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_settle__TOP__test_top__4\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                           ? 0U : (
                                                   (0x20U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
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
                                                          ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                                          : 0U)
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? 
                                                    ((8U 
                                                      & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                       ? 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                        ? 
                                                       ((1U 
                                                         & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                         ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o
                                                         : 0U)
                                                        : 0U)))
                                                     : 0U))));
    vlSymsp->TOP__test_top.__PVT__id_op2_o = ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                               & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                               ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                               : ((
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                                   & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                                   ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                                   : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final));
}

VL_INLINE_OPT void Vtest_top_test_top::_combo__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top::_combo__TOP__test_top__5\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o;
        if ((9U != (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((1U != (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o = 0U;
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o;
        if ((9U != (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            if ((1U != (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o = 0U;
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
        } else {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
        } else {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
        } else {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
        } else {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                            }
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                } else {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__exe_mem_we_o = ((~ (IData)(vlTOPp->rst_i)) 
                                                  & (0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_mem_op_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_mem_data_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_mem_op_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? ((0U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                 >> 0xcU))) ? 1U : 0U)
                : ((3U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                    ? ((0U == (7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                     >> 0xcU))) ? 9U
                        : 0U) : 0U));
        vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o 
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
        vlSymsp->TOP__test_top.__PVT__exe_mem_data_o 
            = ((0x23U == (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))
                ? vlSymsp->TOP__test_top.__PVT__id_exe_op2_o
                : 0U);
        vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                ? 0U : ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                         ? ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                             ? ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)))
                             : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? 0U : ((2U 
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
                                          ? ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                  ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                  : 0U)
                                              : 0U)))
                             : ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                          ? 0U : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                                    ? (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o)
                                                    : 0U)
                                                   : 0U))))));
    }
    vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o 
        = ((~ (IData)(vlTOPp->rst_i)) & ((0x23U != 
                                          (0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                                         & (3U == (0x7fU 
                                                   & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))));
    if ((1U & ((IData)(vlTOPp->rst_i) | (~ ((0x33U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) 
                                            & ((0U 
                                                == 
                                                (0x7fU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 0x19U))) 
                                               | (0x20U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                      >> 0x19U))))))))) {
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o = 0U;
        vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 0U;
    } else {
        if ((0x4000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
            if ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                if (VL_LIKELY((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                        = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                           & vlSymsp->TOP__test_top.__PVT__id_exe_op2_o);
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_o 
                        = vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_i;
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                } else {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                        = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                           | vlSymsp->TOP__test_top.__PVT__id_exe_op2_o);
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                    VL_WRITEF("regwdatao %10#\n",32,
                              vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o);
                }
            } else {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                        = ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 0x19U)))
                            ? ((0x1fU >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                   >> vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                : 0U) : ((0x1fU >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                          ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                             >> vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                                          : 0U));
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_o 
                        = vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_i;
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                } else {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                        = (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                           ^ vlSymsp->TOP__test_top.__PVT__id_exe_op2_o);
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_o 
                        = vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_i;
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                }
            }
        } else {
            if ((0x2000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                        = ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                            < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                            ? 1U : 0U);
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_o 
                        = vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_i;
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                } else {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                        = ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                            < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                            ? 1U : 0U);
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_o 
                        = vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_i;
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                }
            } else {
                if ((0x1000U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                        = ((0x1fU >= vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                            ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               << vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                            : 0U);
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_o 
                        = vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_i;
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                } else {
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o 
                        = ((0U == (0x7fU & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                            >> 0x19U)))
                            ? (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               + vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
                            : (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               - vlSymsp->TOP__test_top.__PVT__id_exe_op2_o));
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_o 
                        = vlSymsp->TOP__test_top.__PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_i;
                    vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o = 1U;
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_inst_o = 0x13U;
        vlSymsp->TOP__test_top.__PVT__ctrl_stall_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_inst_o = (
                                                   (0x40U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 0x13U
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
                                                         : 0x13U))))));
        vlSymsp->TOP__test_top.__PVT__ctrl_stall_o 
            = (((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                              >> 0xfU)) == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                   | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 0x14U)) == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))
                ? 7U : 0U);
    }
    if ((0x4000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
        if ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
            if (VL_LIKELY((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))) {
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 7U));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 0xfU));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o 
                    = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
                    = ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U)));
            } else {
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 7U));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 0xfU));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o 
                    = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
                    = ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U)));
                VL_WRITEF("id_type_i\n");
            }
        } else {
            if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 7U));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 0xfU));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o 
                    = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
                    = ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U)));
            } else {
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 7U));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 0xfU));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o 
                    = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
                    = ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U)));
            }
        }
    } else {
        if ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
            if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 7U));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 0xfU));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o 
                    = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
                    = ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U)));
            } else {
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 7U));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 0xfU));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o 
                    = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
                    = ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U)));
            }
        } else {
            if ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) {
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 7U));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 0xfU));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o 
                    = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
                    = ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U)));
            } else {
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 7U));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o 
                    = (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                >> 0xfU));
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o = 1U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o = 0U;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o 
                    = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op2_o 
                    = ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x14U)));
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__mem_reg_we_o = ((IData)(vlTOPp->rst_i) 
                                                  | (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__mem_ram_data_i = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o 
            = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o;
        vlSymsp->TOP__test_top.__PVT__mem_ram_data_i 
            = vlSymsp->TOP__test_top.__PVT__ram0__DOT__mem
            [(0x1ffffU & (vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o 
                          >> 2U))];
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
    } else {
        if ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o = 0U;
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
                                             ? vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_wdata_o
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
                                                            (vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                             >> 
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
                                                   ((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                                                     < vlSymsp->TOP__test_top.__PVT__id_exe_op2_o)
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
        vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__exe_reg_we_o 
            = vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o;
        if ((0x40U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
            vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
        } else {
            if ((0x20U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                vlSymsp->TOP__test_top.__PVT__exe_reg_we_o 
                    = ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                        ? ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                               >> 3U)) & ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)
                                           ? ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 1U) 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)))
                                           : ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 1U) 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__r_reg_we_o)))))
                        : ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                               >> 3U)) & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 2U)) 
                                          & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 1U) 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o))))));
            } else {
                if ((0x10U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                    if ((8U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                        vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
                    } else {
                        if ((4U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                            vlSymsp->TOP__test_top.__PVT__exe_reg_we_o 
                                = ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                    >> 1U) & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              & (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o)));
                        } else {
                            if ((2U & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)) {
                                if ((1U & (~ vlSymsp->TOP__test_top.__PVT__id_exe_inst_o))) {
                                    vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSymsp->TOP__test_top.__PVT__exe_reg_we_o = 0U;
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__test_top.__PVT__exe_reg_we_o 
                        = ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                               >> 3U)) & ((~ (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 2U)) 
                                          & ((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 1U) 
                                             & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__s_l_reg_we_o)))));
                }
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__id_reg_we_o = (1U 
                                                 & ((~ (IData)(vlTOPp->rst_i)) 
                                                    & ((~ 
                                                        (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                         >> 6U)) 
                                                       & ((0x20U 
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
                                                                & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                   & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_we_o)))))
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
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o = 0U;
        vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? 0U : (0x1fU & ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                  ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
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
                                      : 0U) : ((0x10U 
                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                ? (
                                                   (8U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
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
                                                       ? (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg_waddr_o)
                                                       : 0U)
                                                      : 0U)))
                                                : (
                                                   (8U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
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
                                                       >> 7U)
                                                       : 0U)
                                                      : 0U)))))));
        vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? 0U : (0x1fU & ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                  ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
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
                                                    ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0xfU)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                      : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
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
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U))))
                                  : ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_raddr_o)
                                                     : 0U)
                                                    : 0U)))
                                      : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
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
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)))))));
    }
    vlSymsp->TOP__test_top.__PVT__id_reg1_re_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 6U)) 
                                                        & ((0x20U 
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
                                                                   & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg1_re_o)))))
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
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final = 0U;
        vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o = 0U;
    } else {
        vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? 0U : ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                         ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                             ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                   ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                   : 0U)
                                                  : 0U)
                                              : 0U)))
                             : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((2U 
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
                                          ? ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                  ? vlSymsp->TOP__test_top.__PVT__id0__DOT__i_op1_o
                                                  : 0U)
                                              : 0U)))
                             : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                 ? 0U : ((4U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((2U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                                    : 0U)
                                                   : 0U))))));
        vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o 
            = ((0x40U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                ? 0U : (0x1fU & ((0x20U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                  ? ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
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
                                                    ((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                                                      ? 
                                                     (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                      >> 0x14U)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                      : ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
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
                                  : ((0x10U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                      ? ((8U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                          ? 0U : ((4U 
                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                     ? (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_raddr_o)
                                                     : 0U)
                                                    : 0U)))
                                      : 0U))));
    }
    vlSymsp->TOP__test_top.__PVT__id_reg2_re_o = (1U 
                                                  & ((~ (IData)(vlTOPp->rst_i)) 
                                                     & ((~ 
                                                         (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                          >> 6U)) 
                                                        & ((0x20U 
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
                                                                   & vlSymsp->TOP__test_top.__PVT__if_id_inst_o))))
                                                            : 
                                                           ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                             >> 4U) 
                                                            & ((~ 
                                                                (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                 >> 3U)) 
                                                               & ((~ 
                                                                   (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                    >> 2U)) 
                                                                  & ((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                      >> 1U) 
                                                                     & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                                        & (IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__i_reg2_re_o))))))))));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_ram_data_o = 0U;
    } else {
        if ((9U != (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            vlSymsp->TOP__test_top.__PVT__mem_ram_data_o 
                = ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))
                    ? ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                        ? ((0xffffff00U & vlSymsp->TOP__test_top.__PVT__mem_ram_data_i) 
                           | (0xffU & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o))
                        : ((1U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                            ? ((0xffff0000U & vlSymsp->TOP__test_top.__PVT__mem_ram_data_i) 
                               | ((0xff00U & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                              << 8U)) 
                                  | (0xffU & vlSymsp->TOP__test_top.__PVT__mem_ram_data_i)))
                            : ((2U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                ? ((0xff000000U & vlSymsp->TOP__test_top.__PVT__mem_ram_data_i) 
                                   | ((0xff0000U & 
                                       (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                        << 0x10U)) 
                                      | (0xffffU & vlSymsp->TOP__test_top.__PVT__mem_ram_data_i)))
                                : ((0xff000000U & (vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o 
                                                   << 0x18U)) 
                                   | (0xffffffU & vlSymsp->TOP__test_top.__PVT__mem_ram_data_i)))))
                    : 0U);
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o = 0U;
    } else {
        if ((9U == (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
            vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                = ((0U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                    ? ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlSymsp->TOP__test_top.__PVT__mem_ram_data_i 
                                                      >> 7U)))) 
                                       << 8U)) | (0xffU 
                                                  & vlSymsp->TOP__test_top.__PVT__mem_ram_data_i))
                    : ((1U == (3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                        ? ((0xffffff00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__test_top.__PVT__mem_ram_data_i 
                                                          >> 0xfU)))) 
                                           << 8U)) 
                           | (0xffU & (vlSymsp->TOP__test_top.__PVT__mem_ram_data_i 
                                       >> 8U))) : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   ((0xffffff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__test_top.__PVT__mem_ram_data_i 
                                                                       >> 0x17U)))) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (vlSymsp->TOP__test_top.__PVT__mem_ram_data_i 
                                                          >> 0x10U)))
                                                    : 
                                                   ((0xffffff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__test_top.__PVT__mem_ram_data_i 
                                                                       >> 0x1fU)))) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (vlSymsp->TOP__test_top.__PVT__mem_ram_data_i 
                                                          >> 0x18U))))));
        } else {
            if ((1U != (IData)(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o))) {
                vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o 
                    = vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o;
            }
        }
    }
    vlSymsp->TOP__test_top.__PVT__id_op1_o = ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                               & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                               ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                               : ((
                                                   ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                                   & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                                      == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                                   ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                                   : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final));
}
