#include "m2c.h"
extern "C" f32 func_0026B828(f32);                             /* extern */

extern "C" f32 func_0020B270(f32 fparg0, f32 fparg1, f32 fparg2) {
    return fparg0 - (fparg1 * func_0026B828(fparg2));
}
