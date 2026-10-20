#define DEF_func_001CB598
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001CB598(void *arg0, s32 arg1) {
    s32 temp_s0;

    func_00252500(0x64);
    temp_s0 = func_001BC160(M2C_FIELD(arg0, s32 *, 4));
    func_002569B8(0, func_001BC308(func_001BC330(), 0, temp_s0));
    func_00256088();
    if (arg1 != 0) {
        func_00259024(1.0f, -1.0f, 1.0f);
    }
    if (func_001BC2B8(func_001BC330(), 0, temp_s0) != 0) {
        func_00252500(0x65);
        func_00256908(0x65, 0, func_001BC308(func_001BC330(), 4, temp_s0));
        func_00256908(0x65, 1, func_001BC308(func_001BC330(), 8, temp_s0));
        func_00256908(0x65, 4, func_001BC308(func_001BC330(), 0xC, temp_s0));
        func_00256908(0x65, 0xD, func_001BC308(func_001BC330(), 0x10, temp_s0));
    } else {
        func_00252790(0x65);
    }
    if (func_001BC2B8(func_001BC330(), 1, temp_s0) != 0) {
        func_00252500(0x66);
        func_00256908(0x66, 0, func_001BC308(func_001BC330(), 0x14, temp_s0));
        func_00256908(0x66, 1, func_001BC308(func_001BC330(), 0x18, temp_s0));
        func_00256908(0x66, 4, func_001BC308(func_001BC330(), 0x1C, temp_s0));
        func_00256908(0x66, 0xD, func_001BC308(func_001BC330(), 0x20, temp_s0));
    } else {
        func_00252790(0x66);
    }
    if (func_001BC2B8(func_001BC330(), 2, temp_s0) != 0) {
        func_00252500(0x67);
        func_00256908(0x67, 0, func_001BC308(func_001BC330(), 0x24, temp_s0));
        func_00256908(0x67, 1, func_001BC308(func_001BC330(), 0x28, temp_s0));
        func_00256908(0x67, 4, func_001BC308(func_001BC330(), 0x2C, temp_s0));
        func_00256908(0x67, 0xD, func_001BC308(func_001BC330(), 0x30, temp_s0));
    } else {
        func_00252790(0x67);
    }
    func_00256108();
}
