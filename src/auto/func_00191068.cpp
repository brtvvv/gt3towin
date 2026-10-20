#define DEF_func_00191068
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F698 __attribute__((section(".data")));
extern M2C_UNK D_00354E78;
extern s32 D_004B2CC0 __attribute__((section(".data")));

extern "C" s32 *func_00191068(void) {
    if (D_004B2CC0 == 0) {
        func_0022DB98();
        func_0027D620((s32) &D_004B2CC0, (s32) &D_0032F698, (s32) &D_00354E78);
    }
    return &D_004B2CC0;
}
