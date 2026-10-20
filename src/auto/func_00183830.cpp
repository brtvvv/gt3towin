#define DEF_func_00183830
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032AD80 __attribute__((section(".data")));
extern M2C_UNK D_004B3920 __attribute__((section(".data")));
extern s32 D_004B3940 __attribute__((section(".data")));

extern "C" s32 *func_00183830(void) {
    if (D_004B3940 == 0) {
        func_00183228();
        func_0027D620((s32) &D_004B3940, (s32) &D_0032AD80, (s32) &D_004B3920);
    }
    return &D_004B3940;
}
