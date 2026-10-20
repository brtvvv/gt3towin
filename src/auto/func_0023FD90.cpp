#define DEF_func_0023FD90
#include "m2c.h"
#include "funcs.h"
extern void *D_003548F8;
extern s32 D_003548FC;

extern "C" void func_0023FD90(void) {
    s32 temp_v0;

    if (D_003548F8 != NULL) {
        if (M2C_FIELD(D_003548F8, s32 *, 0x1848) == 0) {
            temp_v0 = D_003548FC + 1;
            D_003548FC = temp_v0;
            if (temp_v0 >= 4) {
                D_003548FC = 0;
                func_0023FCA8(1, 0, 0, 0, 0, 0, 0, 0);
            }
        }
    }
}
