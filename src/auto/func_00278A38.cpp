#define DEF_func_00278A38
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_004AEC08 __attribute__((section(".data")));
extern s32 D_004AEC18 __attribute__((section(".data")));
extern M2C_UNK D_004AEC20 __attribute__((section(".data")));

extern "C" M2C_UNK *func_00278A38(void) {
    if (D_004AEC18 == 0) {
        D_004AEC18 = 1;
        func_0027ED70((s32) &D_004AEC08, 0, 0x10);
        M2C_FIELD(&D_004AEC08, M2C_UNK **, 4) = &D_004AEC20;
    }
    return &D_004AEC08;
}
