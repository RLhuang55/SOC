// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_top__Syms.h"
#include "Vtest_top.h"
#include "Vtest_top_test_top.h"
#include "Vtest_top_rom.h"
#include "Vtest_top_regfile.h"



// FUNCTIONS
Vtest_top__Syms::Vtest_top__Syms(Vtest_top* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__test_top(Verilated::catName(topp->name(), "test_top"))
    , TOP__test_top__regfile0(Verilated::catName(topp->name(), "test_top.regfile0"))
    , TOP__test_top__rom0(Verilated::catName(topp->name(), "test_top.rom0"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->test_top = &TOP__test_top;
    TOPp->test_top->regfile0 = &TOP__test_top__regfile0;
    TOPp->test_top->rom0 = &TOP__test_top__rom0;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__test_top.__Vconfigure(this, true);
    TOP__test_top__regfile0.__Vconfigure(this, true);
    TOP__test_top__rom0.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
