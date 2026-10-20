#define DEF_func_0025FCC0
#include "m2c.h"
#include "funcs.h"
extern s32 D_00354AB4;

extern "C" s32 func_0025FCC0(void *arg0, s32 *arg1, s32 *arg2) {
    if (D_00354AB4 == 0) {
        return 1;
    }
    if (arg1 != NULL) {
        *arg1 = func_00260700(M2C_FIELD(arg0, s32 *, 0x12C));
    }
    if (arg2 != NULL) {
        *arg2 = func_00260708(M2C_FIELD(arg0, s32 *, 0x12C));
    }
    return 0;
}
