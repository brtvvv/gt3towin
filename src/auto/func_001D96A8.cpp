#define DEF_func_001D96A8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001D96A8(void *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    s32 temp_s1;

    temp_s1 = arg0 + 0x10;
    M2C_FIELD(arg0, f32 *, 0x58) = fparg0;
    M2C_FIELD(arg0, f32 *, 0x5C) = fparg1;
    M2C_FIELD(arg0, f32 *, 0x60) = fparg2;
    func_00256088();
    func_00258D54(temp_s1);
    func_00258C50();
    func_00259080(-M2C_FIELD(arg0, f32 *, 0x50));
    func_002590C0(180.0f);
    func_00258EB4(temp_s1);
    func_00258CA4();
    func_00258FD4(-M2C_FIELD(arg0, f32 *, 0x58), -M2C_FIELD(arg0, f32 *, 0x5C), -M2C_FIELD(arg0, f32 *, 0x60));
    func_00258FD4(0.0f, -M2C_FIELD(arg0, f32 *, 0x54), 0.0f);
    func_00258D54(temp_s1);
    func_00256108();
}
