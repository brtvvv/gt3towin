#define DEF_func_001F35C8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0033F1A0 __attribute__((section(".data")));
extern M2C_UNK D_00354E18;
extern s32 D_004B42A0 __attribute__((section(".data")));

extern "C" s32 *func_001F35C8(void) {
    if (D_004B42A0 == 0) {
        func_001EE928();
        func_0027D620((s32) &D_004B42A0, (s32) &D_0033F1A0, (s32) &D_00354E18);
    }
    return &D_004B42A0;
}
