#include "m2c.h"
extern "C" s32 func_00205C40(s32 arg0, f32 fparg0) {
    s32 var_v1;

    var_v1 = 0;
    if ((arg0 == 0) || (arg0 == 3)) {
        if (fparg0 < 0.0f) {
            var_v1 = 2;
        } else if (fparg0 > 1.0f) {
            var_v1 = 2;
        }
    } else if ((fparg0 < 0.0f) || (fparg0 > 1.0f)) {
        var_v1 = 1;
    }
    return var_v1;
}
