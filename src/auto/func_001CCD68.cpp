#include "m2c.h"
extern s32 D_00354C54;

extern "C" s32 func_001CCD68(void) {
    if (D_00354C54 != 0) {
        D_00354C54 = 0;
        return 0;
    }
    return 1;
}
