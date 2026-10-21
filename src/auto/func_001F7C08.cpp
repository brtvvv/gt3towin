#define DEF_func_001F7C08
#include "m2c.h"
#include "funcs.h"

extern "C" void func_001F7C08(void *arg0, f32 fparg0, f32 fparg1) {
    f32 var_f2;

    var_f2 = 0.0f;
    if (fparg1 > 10.0f) {
        var_f2 = 1.0f;
    } else if ((0.2777778f < fparg1) && ((fparg0 / fparg1) < 3.0f)) {
        var_f2 = 0.5f;
    }
    if (var_f2 != 0.0f) {

    } else if (fparg0 < 2.0f) {
        var_f2 = 0.25f;
    }
    if (M2C_FIELD(arg0, f32 *, 0xB0) < var_f2) {
        M2C_FIELD(arg0, f32 *, 0xB0) = var_f2;
    }
}
