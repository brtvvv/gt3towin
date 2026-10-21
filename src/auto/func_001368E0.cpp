#define DEF_func_001368E0
#include "m2c.h"
#include "funcs.h"
extern s32 D_00352EE8;
extern s32 D_00354C18;

extern "C" s32 func_001368E0(s32 arg0) {
    if (!((arg0 == 0) || (D_00354C18 == 0))) {
        return 1;
    }
    return D_00352EE8;
}
