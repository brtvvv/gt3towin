#define DEF_func_00234F88
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00234F88(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, u8 *, 0x110) = (u8) M2C_FIELD(arg2, u8 *, 0x13);
    M2C_FIELD(arg1, u8 *, 0x10E) = (u8) M2C_FIELD(arg2, u8 *, 0x14);
    M2C_FIELD(arg1, u8 *, 0x10F) = (u8) M2C_FIELD(arg2, u8 *, 0x17);
    M2C_FIELD(arg1, s8 *, 0x117) = func_00234FE0((s32) arg0, (s32) M2C_FIELD(arg2, u8 *, 0x15), (s32) M2C_FIELD(arg2, u8 *, 0x16), (s32) M2C_FIELD(arg2, u8 *, 0x12), M2C_FIELD(arg0, s32 *, 0x1B0));
}
