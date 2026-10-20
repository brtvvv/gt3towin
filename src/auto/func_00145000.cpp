#define DEF_func_00145000
#include "m2c.h"
#include "funcs.h"
extern s8 D_002A3660 __attribute__((section(".data")));
extern M2C_UNK D_0030A170 __attribute__((section(".data")));
extern M2C_UNK D_003524B8 __attribute__((section(".data")));

extern "C" s8 *func_00145000(void) {
    if (D_002A3660 == 0) {
        func_0027FDBC((s32) &D_002A3660, (s32) &D_003524B8);
        func_0027F9CC((s32) &D_002A3660, (s32) &D_0030A170);
    }
    return &D_002A3660;
}
