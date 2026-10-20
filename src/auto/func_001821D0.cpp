#define DEF_func_001821D0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00329FE0 __attribute__((section(".data")));
extern M2C_UNK D_004B38A0 __attribute__((section(".data")));
extern s32 D_004B38E0 __attribute__((section(".data")));

extern "C" s32 *func_001821D0(void) {
    if (D_004B38E0 == 0) {
        func_0017EF48();
        func_0027D620((s32) &D_004B38E0, (s32) &D_00329FE0, (s32) &D_004B38A0);
    }
    return &D_004B38E0;
}
