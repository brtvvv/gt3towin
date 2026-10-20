#define DEF_func_00181220
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00181220(s32 arg0) {
    f32 temp_f20;

    func_00254258(2);
    func_00245BC0(arg0);
    func_00255478(3, 0);
    func_00255478(2, 0);
    func_00252500(5);
    func_00252500(4);
    func_002537F0(1);
    func_00253850(7, 0.0f);
    func_00253A70(0);
    func_00257D98(1, 0xFF);
    temp_f20 = (f32) M2C_FIELD(arg0, s32 *, 8);
    func_00257480(0.0f, 0.0f, temp_f20, (f32) func_00245AE0(arg0), 0.0f, 0.0f, (f32) M2C_FIELD(arg0, s32 *, 8), (f32) M2C_FIELD(arg0, s32 *, 0xC));
    func_00252790(4);
    func_002537F0(3);
    func_00253A70(0xFFFFFF);
}
