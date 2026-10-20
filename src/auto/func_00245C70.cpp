#define DEF_func_00245C70
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00245C70(void *arg0, s32 arg1) {
    func_0024CA38(arg1);
    func_0024CA60(arg1, 0, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4), (M2C_FIELD(arg0, s32 *, 8) + 0x3F) & ~0x3F);
    func_0024CCA8(arg1, M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
    func_0024CED0(arg1, 0, 0, M2C_FIELD(arg0, s32 *, 8) - 1);
    func_0024CED0(arg1, 1, 0, M2C_FIELD(arg0, s32 *, 0xC) - 1);
    func_0024CD70(arg1, 4, 1);
    func_0024CD70(arg1, 5, 1);
}
