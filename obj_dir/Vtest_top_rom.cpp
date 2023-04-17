// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "Vtest_top_rom.h"
#include "Vtest_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtest_top_rom::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_rom::writeByte\n"); );
    // Variables
    IData/*31:0*/ unnamedblk1__DOT__t_addr;
    Vtest_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    unnamedblk1__DOT__t_addr = byte_addr;
    if ((0x200000U > byte_addr)) {
        vlSymsp->TOP__test_top__rom0.__PVT__mem[(0x1fffffU 
                                                 & unnamedblk1__DOT__t_addr)] 
            = val;
    }
}

VL_INLINE_OPT void Vtest_top_rom::_sequent__TOP__test_top__rom0__1(Vtest_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_rom::_sequent__TOP__test_top__rom0__1\n"); );
    Vtest_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__test_top__rom0.__PVT__inst_o = ((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                                   ? 
                                                  ((vlSymsp->TOP__test_top__rom0.__PVT__mem
                                                    [
                                                    (0x1ffffcU 
                                                     & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                                    << 0x18U) 
                                                   | ((vlSymsp->TOP__test_top__rom0.__PVT__mem
                                                       [
                                                       (0x1fffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (0x1ffffcU 
                                                            & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                       << 0x10U) 
                                                      | ((vlSymsp->TOP__test_top__rom0.__PVT__mem
                                                          [
                                                          (0x1fffffU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0x1ffffcU 
                                                               & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                          << 8U) 
                                                         | vlSymsp->TOP__test_top__rom0.__PVT__mem
                                                         [
                                                         (0x1fffffU 
                                                          & ((IData)(3U) 
                                                             + 
                                                             (0x1ffffcU 
                                                              & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                                                   : 0U);
}
