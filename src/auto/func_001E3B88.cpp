#define DEF_func_001E3B88
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001E3B88(void *arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4) {
    s32 sp[4];
    s16 temp_s3;

    temp_s3 = M2C_FIELD(arg0, s16 *, 0xC6);
    M2C_FIELD(arg0, s16 *, 0xC6) = arg2;
    func_001E37D8((s32) arg0, arg1, (s32) sp, 0);
    func_001E3A60((s32) M2C_FIELD(arg0, u8 *, 0xC8), (s32) sp, arg3, arg4);
    M2C_FIELD(arg0, s16 *, 0xC6) = temp_s3;
}
