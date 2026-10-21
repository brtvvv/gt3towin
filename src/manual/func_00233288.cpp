#define DEF_func_00233288
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_00232658_(s32, s32, s64) __asm__("func_00232658");
extern "C" void func_00233288(void *arg0) {
    u8 temp_s2;
    u8 temp_s2_2;
    u8 temp_s2_3;
    u8 temp_s2_4;
    void *temp_v0;

    temp_v0 = func_00232658_(arg0 + 0x1D0, 0x12, M2C_FIELD(arg0, s64 *, 0x48));
    M2C_FIELD(arg0, s32 *, 0x154) = (s32) M2C_FIELD(temp_v0, u8 *, 0x19);
    M2C_FIELD(arg0, s32 *, 0x158) = (s32) M2C_FIELD(temp_v0, u8 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x144) = func_00236F98((s32) arg0, (s32) M2C_FIELD(temp_v0, u8 *, 0x11), (s32) M2C_FIELD(temp_v0, u8 *, 0x13), (s32) M2C_FIELD(temp_v0, u8 *, 0x12));
    M2C_FIELD(arg0, s32 *, 0x148) = func_00236F98((s32) arg0, (s32) M2C_FIELD(temp_v0, u8 *, 0x14), (s32) M2C_FIELD(temp_v0, u8 *, 0x16), (s32) M2C_FIELD(temp_v0, u8 *, 0x15));
    M2C_FIELD(arg0, s32 *, 0x14C) = func_00236F98((s32) arg0, (s32) M2C_FIELD(temp_v0, u16 *, 0x50), (s32) M2C_FIELD(temp_v0, u16 *, 0x54), (s32) M2C_FIELD(temp_v0, u16 *, 0x52));
    M2C_FIELD(arg0, s32 *, 0x150) = func_00236F98((s32) arg0, (s32) M2C_FIELD(temp_v0, u16 *, 0x56), (s32) M2C_FIELD(temp_v0, u16 *, 0x5A), (s32) M2C_FIELD(temp_v0, u16 *, 0x58));
    M2C_FIELD(arg0, s32 *, 0x15C) = func_00236F98((s32) arg0, (s32) M2C_FIELD(temp_v0, u8 *, 0x21), (s32) M2C_FIELD(temp_v0, u8 *, 0x23), (s32) M2C_FIELD(temp_v0, u8 *, 0x22));
    M2C_FIELD(arg0, s32 *, 0x160) = func_00236F98((s32) arg0, (s32) M2C_FIELD(temp_v0, u8 *, 0x24), (s32) M2C_FIELD(temp_v0, u8 *, 0x26), (s32) M2C_FIELD(temp_v0, u8 *, 0x25));
    M2C_FIELD(arg0, s32 *, 0x164) = (s32) M2C_FIELD(temp_v0, u8 *, 0x27);
    M2C_FIELD(arg0, s32 *, 0x168) = (s32) M2C_FIELD(temp_v0, u8 *, 0x28);
    temp_s2 = M2C_FIELD(temp_v0, u8 *, 0x2B);
    M2C_FIELD(arg0, s32 *, 0x16C) = func_00236F98((s32) arg0, 1, (s32) M2C_FIELD(temp_v0, u8 *, 0x2E), (s32) temp_s2);
    M2C_FIELD(arg0, s32 *, 0x170) = func_00236F98((s32) arg0, 1, (s32) M2C_FIELD(temp_v0, u8 *, 0x31), (s32) temp_s2);
    temp_s2_2 = M2C_FIELD(temp_v0, u8 *, 0x32);
    M2C_FIELD(arg0, s32 *, 0x174) = func_00236F98((s32) arg0, 1, (s32) M2C_FIELD(temp_v0, u8 *, 0x35), (s32) temp_s2_2);
    M2C_FIELD(arg0, s32 *, 0x178) = func_00236F98((s32) arg0, 1, (s32) M2C_FIELD(temp_v0, u8 *, 0x38), (s32) temp_s2_2);
    temp_s2_3 = M2C_FIELD(temp_v0, u8 *, 0x39);
    M2C_FIELD(arg0, s32 *, 0x17C) = func_00236F98((s32) arg0, 1, (s32) M2C_FIELD(temp_v0, u8 *, 0x3C), (s32) temp_s2_3);
    M2C_FIELD(arg0, s32 *, 0x180) = func_00236F98((s32) arg0, 1, (s32) M2C_FIELD(temp_v0, u8 *, 0x3F), (s32) temp_s2_3);
    temp_s2_4 = M2C_FIELD(temp_v0, u8 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x184) = func_00236F98((s32) arg0, 1, (s32) M2C_FIELD(temp_v0, u8 *, 0x43), (s32) temp_s2_4);
    M2C_FIELD(arg0, s32 *, 0x188) = func_00236F98((s32) arg0, 1, (s32) M2C_FIELD(temp_v0, u8 *, 0x46), (s32) temp_s2_4);
    M2C_FIELD(arg0, s32 *, 0x18C) = func_00236F98((s32) arg0, 1, (s32) M2C_FIELD(temp_v0, u8 *, 0x4A), (s32) M2C_FIELD(temp_v0, u8 *, 0x47));
    M2C_FIELD(arg0, s32 *, 0x190) = func_00236F98((s32) arg0, 1, (s32) M2C_FIELD(temp_v0, u8 *, 0x4E), (s32) M2C_FIELD(temp_v0, u8 *, 0x4B));
}
