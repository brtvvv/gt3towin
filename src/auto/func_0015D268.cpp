#define DEF_func_0015D268
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003221A0 __attribute__((section(".data")));
extern M2C_UNK D_00354D58;
extern s32 D_004B35F0 __attribute__((section(".data")));

extern "C" s32 *func_0015D268(void) {
    if (D_004B35F0 == 0) {
        func_0014A068();
        func_0027D620((s32) &D_004B35F0, (s32) &D_003221A0, (s32) &D_00354D58);
    }
    return &D_004B35F0;
}
