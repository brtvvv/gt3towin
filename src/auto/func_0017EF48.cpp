#define DEF_func_0017EF48
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00329878 __attribute__((section(".data")));
extern M2C_UNK D_004B3890 __attribute__((section(".data")));
extern s32 D_004B38A0 __attribute__((section(".data")));

extern "C" s32 *func_0017EF48(void) {
    if (D_004B38A0 == 0) {
        func_0017D920();
        func_0027D620((s32) &D_004B38A0, (s32) &D_00329878, (s32) &D_004B3890);
    }
    return &D_004B38A0;
}
