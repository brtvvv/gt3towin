#define DEF_func_00172150
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00326398 __attribute__((section(".data")));
extern s32 D_004B36A0 __attribute__((section(".data")));
extern M2C_UNK D_004B4220 __attribute__((section(".data")));

extern "C" s32 *func_00172150(void) {
    if (D_004B36A0 == 0) {
        func_001D9038();
        func_0027D620((s32) &D_004B36A0, (s32) &D_00326398, (s32) &D_004B4220);
    }
    return &D_004B36A0;
}
