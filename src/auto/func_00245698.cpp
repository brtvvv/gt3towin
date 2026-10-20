#define DEF_func_00245698
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00245698(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_00256190(0x887);
    func_00245BC0(arg1);
    func_00245B38(arg0);
    func_00253B00(0);
    func_00255478(3, arg2);
    func_00255478(2, arg3);
    func_00252790(4);
    func_00252790(6);
    func_00252790(5);
    func_0025B248(1.0f, 1.0f, 1.0f, 1.0f);
    func_00257480(0.0f, 0.0f, (f32) M2C_FIELD(arg0, s32 *, 8), (f32) M2C_FIELD(arg0, s32 *, 0xC), 0.0f, 0.0f, (f32) M2C_FIELD(arg1, s32 *, 8), (f32) M2C_FIELD(arg1, s32 *, 0xC));
    func_002563C0();
    return arg0;
}
