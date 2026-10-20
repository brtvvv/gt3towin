#include "m2c.h"
extern "C" f32 func_0026D3B0();                                /* extern */

extern "C" f32 func_0026D3D8(f32 fparg0, f32 fparg1) {
    return (func_0026D3B0() * (fparg1 - fparg0)) + fparg0;
}
