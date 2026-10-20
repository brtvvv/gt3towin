#define DEF_func_0017D920
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00329440 __attribute__((section(".data")));
extern M2C_UNK D_00354D20;
extern s32 D_004B3890 __attribute__((section(".data")));

extern "C" s32 *func_0017D920(void) {
    if (D_004B3890 == 0) {
        func_00101B20();
        func_0027D620((s32) &D_004B3890, (s32) &D_00329440, (s32) &D_00354D20);
    }
    return &D_004B3890;
}
