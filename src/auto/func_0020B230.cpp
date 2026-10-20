#include "m2c.h"
extern "C" f32 func_0026B3D8(f32);                             /* extern */

extern "C" f32 func_0020B230(f32 fparg0, f32 fparg1, f32 fparg2) {
    return fparg0 + (fparg1 * func_0026B3D8(fparg2));
}
