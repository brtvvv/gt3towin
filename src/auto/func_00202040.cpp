#include "m2c.h"
extern "C" s32 func_00201938();                                /* extern */

extern "C" s32 func_00202040(void) {
    return (func_00201938() == 0) ? 0 : 2;
}
