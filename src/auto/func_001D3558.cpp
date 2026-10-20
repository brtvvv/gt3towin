#define DEF_func_001D3558
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F2F98 __attribute__((section(".data")));
extern f32 D_003540C4;
extern f32 D_003540C8;
extern f32 D_003540CC;

extern "C" void func_001D3558(void) {
    func_00259024(D_003540CC, D_003540CC, 1.0f);
    func_00258FD4(D_003540C8, D_003540C4, 0.0f);
    func_0023E190((s32) &D_002F2F98, D_003540C8, D_003540C4);
    func_0023E170((s32) &D_002F2F98, D_003540CC);
}
