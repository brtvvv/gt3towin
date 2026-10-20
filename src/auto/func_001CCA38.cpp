#define DEF_func_001CCA38
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002EBE28 __attribute__((section(".data")));

extern "C" void func_001CCA38(s32 arg0) {
    func_001CCD40();
    func_0022FBE8((s32) &D_002EBE28, arg0 + 0x134);
    func_0022FBE8((s32) &D_002EBE28, arg0);
}
