// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_top.h for the primary calling header

#ifndef _VTEST_TOP_TEST_TOP_H_
#define _VTEST_TOP_TEST_TOP_H_  // guard

#include "verilated_heavy.h"
#include "Vtest_top__Dpi.h"

//==========

class Vtest_top__Syms;
class Vtest_top_VerilatedVcd;
class Vtest_top_rom;
class Vtest_top_regfile;


//----------

VL_MODULE(Vtest_top_test_top) {
  public:
    // CELLS
    Vtest_top_rom* rom0;
    Vtest_top_regfile* regfile0;
    
    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__ce_wire;
    CData/*0:0*/ __PVT__id_reg_we_o;
    CData/*4:0*/ __PVT__id_reg_waddr_o;
    CData/*4:0*/ __PVT__id_reg1_addr_o;
    CData/*4:0*/ __PVT__id_reg2_addr_o;
    CData/*0:0*/ __PVT__id_reg1_re_o;
    CData/*0:0*/ __PVT__id_reg2_re_o;
    CData/*0:0*/ __PVT__id_exe_reg_we_o;
    CData/*4:0*/ __PVT__id_exe_reg_waddr_o;
    CData/*4:0*/ __PVT__exe_reg_waddr_o;
    CData/*0:0*/ __PVT__exe_reg_we_o;
    CData/*0:0*/ __PVT__exe_mem_we_o;
    CData/*3:0*/ __PVT__exe_mem_op_o;
    CData/*4:0*/ __PVT__exe_mem_reg_waddr_o;
    CData/*0:0*/ __PVT__exe_mem_reg_we_o;
    CData/*0:0*/ __PVT__exe_mem_mem_we_o;
    CData/*3:0*/ __PVT__exe_mem_mem_op_o;
    CData/*4:0*/ __PVT__mem_reg_waddr_o;
    CData/*0:0*/ __PVT__mem_reg_we_o;
    CData/*4:0*/ __PVT__mem_wb_reg_waddr_o;
    CData/*0:0*/ __PVT__mem_wb_reg_we_o;
    CData/*0:0*/ __PVT__mem_ram_w_request_o;
    CData/*4:0*/ __PVT__id_exe_rd_o;
    CData/*5:0*/ __PVT__ctrl_stall_o;
    CData/*0:0*/ __PVT__id_exe_inst_is_load_o;
    CData/*4:0*/ __PVT__id0__DOT__i_reg1_raddr_o;
    CData/*4:0*/ __PVT__id0__DOT__i_reg2_raddr_o;
    CData/*0:0*/ __PVT__id0__DOT__i_reg1_re_o;
    CData/*0:0*/ __PVT__id0__DOT__i_reg2_re_o;
    CData/*0:0*/ __PVT__id0__DOT__i_reg_we_o;
    CData/*4:0*/ __PVT__id0__DOT__i_reg_waddr_o;
    CData/*0:0*/ __PVT__id0__DOT__r_reg1_re_o;
    CData/*0:0*/ __PVT__id0__DOT__r_reg2_re_o;
    CData/*0:0*/ __PVT__id0__DOT__r_reg_we_o;
    CData/*0:0*/ __PVT__id0__DOT__inst_type_r__DOT__isType_r;
    CData/*0:0*/ __PVT__exe0__DOT__r_reg_we_o;
    CData/*0:0*/ __PVT__exe0__DOT__s_l_reg_we_o;
    IData/*31:0*/ __PVT__pc_wire;
    IData/*31:0*/ __PVT__if_id_inst_addr_o;
    IData/*31:0*/ __PVT__if_id_inst_o;
    IData/*31:0*/ __PVT__id_inst_o;
    IData/*31:0*/ __PVT__id_op1_o;
    IData/*31:0*/ __PVT__id_op2_o;
    IData/*31:0*/ __PVT__id_exe_op1_o;
    IData/*31:0*/ __PVT__id_exe_op2_o;
    IData/*31:0*/ __PVT__id_exe_inst_o;
    IData/*31:0*/ __PVT__exe_reg_wdata_o;
    IData/*31:0*/ __PVT__exe_mem_addr_o;
    IData/*31:0*/ __PVT__exe_mem_data_o;
    IData/*31:0*/ __PVT__exe_mem_reg_wdata_o;
    IData/*31:0*/ __PVT__exe_mem_mem_addr_o;
    IData/*31:0*/ __PVT__exe_mem_mem_data_o;
    IData/*31:0*/ __PVT__mem_reg_wdata_o;
    IData/*31:0*/ __PVT__mem_wb_reg_wdata_o;
    IData/*31:0*/ __PVT__mem_ram_addr_o;
    IData/*31:0*/ __PVT__mem_ram_data_o;
    IData/*31:0*/ __PVT__mem_ram_data_i;
    IData/*31:0*/ __PVT__id0__DOT__op1_o_final;
    IData/*31:0*/ __PVT__id0__DOT__op2_o_final;
    IData/*31:0*/ __PVT__id0__DOT__i_op1_o;
    IData/*31:0*/ __PVT__id0__DOT__i_op2_o;
    IData/*31:0*/ __PVT__exe0__DOT__r_reg_wdata_o;
    IData/*31:0*/ __PVT__exe0__DOT__exe_type_r0__DOT__reg_waddr_o;
    IData/*31:0*/ __PVT__ram0__DOT__mem[131072];
    
    // INTERNAL VARIABLES
  private:
    Vtest_top__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest_top_test_top);  ///< Copying not allowed
  public:
    Vtest_top_test_top(const char* name = "TOP");
    ~Vtest_top_test_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtest_top__Syms* symsp, bool first);
    static void _combo__TOP__test_top__5(Vtest_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__test_top__1(Vtest_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__test_top__2(Vtest_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__test_top__3(Vtest_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__test_top__4(Vtest_top__Syms* __restrict vlSymsp);
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
