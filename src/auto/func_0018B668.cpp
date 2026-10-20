#define DEF_func_0018B668
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032DF98 __attribute__((section(".data")));
extern M2C_UNK D_00354E68;
extern s32 D_004B3A80 __attribute__((section(".data")));

extern "C" s32 *func_0018B668(void) {
    if (D_004B3A80 == 0) {
        func_0022B380();
        func_0027D620((s32) &D_004B3A80, (s32) &D_0032DF98, (s32) &D_00354E68);
    }
    return &D_004B3A80;
}
