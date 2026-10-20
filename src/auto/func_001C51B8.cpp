#define DEF_func_001C51B8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001C51B8(void *arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = arg0 + 0x1348;
    func_00232C10(temp_s2, arg1);
    M2C_FIELD(arg0, s32 *, 0x1530) = temp_s2;
    func_001DA2D0((s32) arg0, arg1, arg1 + 0x1F4);
}
