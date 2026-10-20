#define DEF_func_001AF840
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00332B58 __attribute__((section(".data")));
extern M2C_UNK D_00354ED8;
extern s32 D_004B3DC0 __attribute__((section(".data")));

extern "C" s32 *func_001AF840(void) {
    if (D_004B3DC0 == 0) {
        func_00246890();
        func_0027D620((s32) &D_004B3DC0, (s32) &D_00332B58, (s32) &D_00354ED8);
    }
    return &D_004B3DC0;
}
