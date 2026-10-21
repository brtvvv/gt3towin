#define DEF_func_00246C10
#include "m2c.h"
#include "funcs.h"

extern "C" f32 func_00246C10(s32 *arg0, f32 fparg0) {
    s32 temp_a0;

    temp_a0 = *arg0;
    switch (temp_a0) {                              /* irregular */
    case 0:
        return fparg0 * 0.001f;
    case 1:
        return fparg0 * 0.00062139f;
    default:
        return fparg0 * 0.001f;
    }
}
