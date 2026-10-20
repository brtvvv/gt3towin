#define DEF_func_001570B8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00320598 __attribute__((section(".data")));
extern M2C_UNK D_003531F0 __attribute__((section(".data")));
extern s32 D_004B3540 __attribute__((section(".data")));

extern "C" s32 *func_001570B8(void) {
    if (D_004B3540 == 0) {
        func_00151EE8();
        func_0027D5F8((s32) &D_004B3540, (s32) &D_00320598, (s32) &D_003531F0, 1);
    }
    return &D_004B3540;
}
