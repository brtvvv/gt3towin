#include "m2c.h"
extern "C" f32 func_00246E98();                                /* extern */

extern "C" f32 func_00246ED0(f32 fparg0, f32 fparg1) {
    return ((func_00246E98() - 1.0f) * (fparg1 - fparg0)) + fparg0;
}
