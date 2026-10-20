#define DEF_func_001751E0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001751E0(s32 arg0, void *arg1, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    s32 sp[4];
    if (fparg0 != 1.0f) {
        func_00175188((s32) sp, 0, (f32) M2C_FIELD(arg1, u8 *, 0) * fparg0, 255.0f);
    }
    if (fparg1 != 1.0f) {
        func_00175188((s32) sp, 1, (f32) M2C_FIELD(arg1, u8 *, 1) * fparg1, 255.0f);
    }
    if (fparg2 != 1.0f) {
        func_00175188((s32) sp, 2, (f32) M2C_FIELD(arg1, u8 *, 2) * fparg2, 255.0f);
    }
    if (fparg3 != 1.0f) {
        func_00175188((s32) sp, 3, (f32) M2C_FIELD(arg1, u8 *, 3) * fparg3, 128.0f);
    }
    func_001754E0(arg0, func_001754C0((s32) sp));
    func_001754D8(arg0, func_001754B8((s32) sp));
    func_001754D0(arg0, func_001754B0((s32) sp));
    func_001754C8(arg0, func_001754A8((s32) sp));
    return arg0;
}
