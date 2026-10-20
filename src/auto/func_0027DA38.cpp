#define DEF_func_0027DA38
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00349E48 __attribute__((section(".data")));
extern M2C_UNK D_00354F20 __attribute__((section(".data")));
extern s32 D_004B4580 __attribute__((section(".data")));

extern "C" s32 *func_0027DA38(void) {
    if (D_004B4580 == 0) {
        func_0027DC18();
        func_0027D620((s32) &D_004B4580, (s32) &D_00349E48, (s32) &D_00354F20);
    }
    return &D_004B4580;
}
