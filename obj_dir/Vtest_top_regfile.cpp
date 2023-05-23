// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_regfile.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtest_top_regfile) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtest_top_regfile::__Vconfigure(Vtest_top__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtest_top_regfile::~Vtest_top_regfile() {
}

void Vtest_top_regfile::readRegister(uint32_t raddr, uint32_t& val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile::readRegister\n"); );
    // Variables
    Vtest_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    val = vlSymsp->TOP__test_top__regfile0.__PVT__regs
        [(0x1fU & raddr)];
}

void Vtest_top_regfile::_initial__TOP__test_top__regfile0__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile::_initial__TOP__test_top__regfile0__1\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[1U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[2U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[3U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[4U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[5U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[6U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[7U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[8U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[9U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xaU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xbU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xcU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xdU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xeU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0xfU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x10U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x11U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x12U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x13U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x14U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x15U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x16U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x17U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x18U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x19U] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1aU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1bU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1cU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1dU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1eU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__regs[0x1fU] = 0U;
    vlSymsp->TOP__test_top__regfile0.__PVT__i = 0x20U;
}

VL_INLINE_OPT void Vtest_top_regfile::_sequent__TOP__test_top__regfile0__2(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile::_sequent__TOP__test_top__regfile0__2\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__regs__v0;
    CData/*0:0*/ __Vdlyvset__regs__v0;
    IData/*31:0*/ __Vdlyvval__regs__v0;
    // Body
    __Vdlyvset__regs__v0 = 0U;
    if ((1U & (~ (IData)(vlTOPp->rst_i)))) {
        if (((IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o) 
             & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)))) {
            __Vdlyvval__regs__v0 = vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o;
            __Vdlyvset__regs__v0 = 1U;
            __Vdlyvdim0__regs__v0 = vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o;
        }
    }
    if (__Vdlyvset__regs__v0) {
        vlSymsp->TOP__test_top__regfile0.__PVT__regs[__Vdlyvdim0__regs__v0] 
            = __Vdlyvval__regs__v0;
    }
}

VL_INLINE_OPT void Vtest_top_regfile::_settle__TOP__test_top__regfile0__3(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile::_settle__TOP__test_top__regfile0__3\n"); );
    Vtest_top* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))) {
        vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o = 0U;
    } else {
        if ((1U & (~ ((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o) 
                        == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                       & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                      & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o))))) {
            vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o 
                = ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o)
                    ? vlSymsp->TOP__test_top__regfile0.__PVT__regs
                   [vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o]
                    : 0U);
        }
    }
    vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o 
        = ((0U == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))
            ? 0U : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o) 
                       == (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o)) 
                      & (IData)(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o)) 
                     & (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o))
                     ? vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o
                     : ((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o)
                         ? vlSymsp->TOP__test_top__regfile0.__PVT__regs
                        [vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o]
                         : 0U)));
}

void Vtest_top_regfile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__we_i = VL_RAND_RESET_I(1);
    __PVT__waddr_i = VL_RAND_RESET_I(5);
    __PVT__wdata_i = VL_RAND_RESET_I(32);
    __PVT__re1_i = VL_RAND_RESET_I(1);
    __PVT__raddr1_i = VL_RAND_RESET_I(5);
    __PVT__re2_i = VL_RAND_RESET_I(1);
    __PVT__raddr2_i = VL_RAND_RESET_I(5);
    __PVT__rdata1_o = VL_RAND_RESET_I(32);
    __PVT__rdata2_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__i = VL_RAND_RESET_I(32);
}
