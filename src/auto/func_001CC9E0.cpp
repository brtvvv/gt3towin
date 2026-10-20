#define DEF_func_001CC9E0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002EBE28 __attribute__((section(".data")));

extern "C" void func_001CC9E0(s32 arg0) {
    func_0022FB08((s32) &D_002EBE28, arg0, 0x14);
    func_0022FB08((s32) &D_002EBE28, arg0 + 0x134, 0x15);
    func_001CCD38();
}
