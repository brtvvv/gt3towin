#define DEF_func_00220B80
#include "m2c.h"
#include "funcs.h"
struct VC_2C_2_1 { char pad[0x2C]; virtual void d0(); virtual void d1(); virtual s32 v2(s32); };
extern void *D_00354460;

extern "C" void func_00220B80(s32 arg0) {
    ((VC_2C_2_1 *)(D_00354460))->v2((s32)(arg0));
}
