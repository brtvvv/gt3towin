#include "m2c.h"
extern "C" s32 func_0016CE38();                                /* extern */
extern "C" M2C_UNK func_001723A0(s32, s32, f32, f32, f32, f32); /* extern */
extern "C" s32 func_001D5BD0(s32, M2C_UNK);                    /* extern */
extern "C" f32 func_001D7DA0(void *);                          /* extern */
extern "C" f32 func_001D7DE0(void *);                          /* extern */

extern "C" void func_0016D480(void *arg0) {
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f23;
    s32 temp_s1;

    temp_s1 = func_0016CE38();
    temp_f23 = func_001D7DA0(arg0);
    temp_f21 = func_001D7DE0(arg0);
    temp_f22 = M2C_FIELD(arg0, f32 *, 0x38);
    temp_f20 = M2C_FIELD(arg0, f32 *, 0x3C);
    func_001723A0(temp_s1, func_001D5BD0(M2C_FIELD(arg0, s32 *, 0x1E4), 0), temp_f23, temp_f21, temp_f22, temp_f20);
}
