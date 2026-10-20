#include "m2c.h"
extern "C" s32 func_0026D5E0(s32);                             /* extern */
extern "C" M2C_UNK func_0027ED70(s32, M2C_UNK, s32);           /* extern */
extern s32 D_00354348;
extern s32 D_0035434C;
extern s32 D_00354350;

extern "C" void func_001F5CA8(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_v0;

    temp_s2 = arg0 * arg1;
    temp_v0 = func_0026D5E0(temp_s2);
    D_0035434C = arg0;
    D_00354350 = arg1;
    D_00354348 = temp_v0;
    func_0027ED70(temp_v0, 0, temp_s2);
}
