#define DEF_func_00245F08
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F5880 __attribute__((section(".data")));

extern "C" void func_00245F08(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;

    func_00244D30((s32) &D_002F5880);
    temp_a2 = M2C_FIELD(arg0, s32 *, 8);
    func_00255DD0(M2C_FIELD(arg0, s32 *, 0), arg2, temp_a2, 0, 0, temp_a2, M2C_FIELD(arg0, s32 *, 0xC), arg1);
}
