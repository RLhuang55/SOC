// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef _VTEST_TOP_DPRAM_H_
#define _VTEST_TOP_DPRAM_H_  // guard

#include "verilated.h"
#include "Vtest_top__Dpi.h"

//==========

class Vtest_top__Syms;
class Vtest_top_VerilatedVcd;


//----------

VL_MODULE(Vtest_top_dpram) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__we_i,0,0);
    VL_IN8(__PVT__inst_ce_i,0,0);
    VL_IN(__PVT__addr_i,31,0);
    VL_IN(__PVT__data_i,31,0);
    VL_OUT(__PVT__data_o,31,0);
    VL_IN(__PVT__pc_i,31,0);
    VL_OUT(__PVT__inst_o,31,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__mem[2097152];
    
    // INTERNAL VARIABLES
  private:
    Vtest_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest_top_dpram);  ///< Copying not allowed
  public:
    Vtest_top_dpram(const char* name = "TOP");
    ~Vtest_top_dpram();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtest_top__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__test_top__dpram0__1(Vtest_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__test_top__dpram0__2(Vtest_top__Syms* __restrict vlSymsp);
    void writeByte(uint32_t byte_addr, uint32_t val);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
