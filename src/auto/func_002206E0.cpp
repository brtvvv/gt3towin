#define DEF_func_002206E0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00342620 __attribute__((section(".data")));
extern f32 D_003522CC;
extern f32 D_003522D0;
extern f32 D_003522D4;

extern "C" void *func_002206E0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &D_00342620;
    func_00220760((s32) arg0, D_003522CC, D_003522D0, D_003522D4);
    return arg0;
}
