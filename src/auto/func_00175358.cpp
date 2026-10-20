#define DEF_func_00175358
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00175358(s32 arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp[4];
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;

    temp_a2 = arg2 & 0xFF;
    temp_s4 = arg5 & 0xFF;
    temp_s3 = arg4 & 0xFF;
    temp_s2 = arg3 & 0xFF;
    if (temp_a2 != 0) {
        func_00175188((s32) sp, 0, (f32) (M2C_FIELD(arg1, u8 *, 0) + temp_a2), 255.0f);
    }
    if (temp_s2 != 0) {
        func_00175188((s32) sp, 1, (f32) (M2C_FIELD(arg1, u8 *, 1) + temp_s2), 255.0f);
    }
    if (temp_s3 != 0) {
        func_00175188((s32) sp, 2, (f32) (M2C_FIELD(arg1, u8 *, 2) + temp_s3), 255.0f);
    }
    if (temp_s4 != 0) {
        func_00175188((s32) sp, 3, (f32) (M2C_FIELD(arg1, u8 *, 3) + temp_s4), 128.0f);
    }
    func_001754E0(arg0, func_001754C0((s32) sp));
    func_001754D8(arg0, func_001754B8((s32) sp));
    func_001754D0(arg0, func_001754B0((s32) sp));
    func_001754C8(arg0, func_001754A8((s32) sp));
    return arg0;
}
