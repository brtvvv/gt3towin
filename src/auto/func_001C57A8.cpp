#include "m2c.h"
extern "C" M2C_UNK func_001CA338(s32);                         /* extern */
extern "C" M2C_UNK func_001CA458(s32, f32);                    /* extern */
extern "C" s32 func_0023D4B8(s32);                             /* extern */
extern f32 D_00353FE0;
extern s32 D_00353FE4;
extern s32 D_00353FE8;

extern "C" void func_001C57A8(void *arg0) {
    if ((D_00353FE8 != 0) || (D_00353FE4 >= func_0023D4B8(M2C_FIELD(arg0, s32 *, 0x160) + 0xB0))) {
        func_001CA458(M2C_FIELD(arg0, s32 *, 0x160), D_00353FE0);
    }
    func_001CA338(M2C_FIELD(arg0, s32 *, 0x160));
    D_00353FE8 = 0;
}
