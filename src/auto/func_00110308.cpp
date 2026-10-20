#include "m2c.h"
extern s32 D_00352948;

extern "C" s32 func_00110308(void) {
    if ((u32) (D_00352948 - 1) < 0x1C1U) {
        return (s32) D_00352948 / 50;
    }
    return 0xA;
}
