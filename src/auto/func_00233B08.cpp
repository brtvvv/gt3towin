#define DEF_func_00233B08
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00233B08(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg1, s8 *, 0x10A) = func_00234FE0((s32) arg0, (s32) M2C_FIELD(arg2, u8 *, 0x12), (s32) M2C_FIELD(arg2, u8 *, 0x13), (s32) M2C_FIELD(arg2, u8 *, 0x11), M2C_FIELD(arg0, s32 *, 0x11C));
    M2C_FIELD(arg1, s8 *, 0x10B) = func_00234FE0((s32) arg0, (s32) M2C_FIELD(arg2, u8 *, 0x16), (s32) M2C_FIELD(arg2, u8 *, 0x17), (s32) M2C_FIELD(arg2, u8 *, 0x15), M2C_FIELD(arg0, s32 *, 0x120));
}
