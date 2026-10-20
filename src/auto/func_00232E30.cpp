#define DEF_func_00232E30
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_00232E30(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (func_00232FE0(arg0, arg1) == 0) {
        temp_v0 = func_00232658(arg0 + 0x1D0, 0x1E, arg1);
        if ((temp_v0 == 0) || (M2C_FIELD(arg0, s64 *, 0x18) = (s64) M2C_FIELD(temp_v0, s64 *, 8), M2C_FIELD(arg0, s64 *, 0x20) = (s64) M2C_FIELD(temp_v0, s64 *, 0x10), M2C_FIELD(arg0, s64 *, 0x28) = (s64) M2C_FIELD(temp_v0, s64 *, 0x20), M2C_FIELD(arg0, s64 *, 0x30) = (s64) M2C_FIELD(temp_v0, s64 *, 0x38), M2C_FIELD(arg0, s64 *, 0x38) = (s64) M2C_FIELD(temp_v0, s64 *, 0x70), M2C_FIELD(arg0, s64 *, 0x40) = (s64) M2C_FIELD(temp_v0, s64 *, 0x98), M2C_FIELD(arg0, s64 *, 0x48) = (s64) M2C_FIELD(temp_v0, s64 *, 0xA0), M2C_FIELD(arg0, s64 *, 0x50) = (s64) M2C_FIELD(temp_v0, s64 *, 0x90), M2C_FIELD(arg0, s64 *, 0x58) = (s64) M2C_FIELD(temp_v0, s64 *, 0xB8), M2C_FIELD(arg0, s64 *, 0x60) = (s64) M2C_FIELD(temp_v0, s64 *, 0xC0), M2C_FIELD(arg0, s64 *, 0x68) = (s64) M2C_FIELD(temp_v0, s64 *, 0x18), M2C_FIELD(arg0, s64 *, 0x70) = (s64) M2C_FIELD(temp_v0, s64 *, 0x28), M2C_FIELD(arg0, s64 *, 0x78) = (s64) M2C_FIELD(temp_v0, s64 *, 0x30), M2C_FIELD(arg0, s64 *, 0x80) = (s64) M2C_FIELD(temp_v0, s64 *, 0x40), M2C_FIELD(arg0, s64 *, 0x88) = (s64) M2C_FIELD(temp_v0, s64 *, 0x48), M2C_FIELD(arg0, s64 *, 0x90) = (s64) M2C_FIELD(temp_v0, s64 *, 0x50), M2C_FIELD(arg0, s64 *, 0x98) = (s64) M2C_FIELD(temp_v0, s64 *, 0x58), M2C_FIELD(arg0, s64 *, 0xA0) = (s64) M2C_FIELD(temp_v0, s64 *, 0x60), M2C_FIELD(arg0, s64 *, 0xA8) = (s64) M2C_FIELD(temp_v0, s64 *, 0x68), M2C_FIELD(arg0, s64 *, 0xB0) = (s64) M2C_FIELD(temp_v0, s64 *, 0x78), M2C_FIELD(arg0, s64 *, 0xB8) = (s64) M2C_FIELD(temp_v0, s64 *, 0x80), M2C_FIELD(arg0, s64 *, 0xC0) = (s64) M2C_FIELD(temp_v0, s64 *, 0x88), M2C_FIELD(arg0, s64 *, 0xC8) = (s64) M2C_FIELD(temp_v0, s64 *, 0xB0), M2C_FIELD(arg0, s64 *, 0xD0) = (s64) M2C_FIELD(temp_v0, s64 *, 0xA8), M2C_FIELD(arg0, s64 *, 0xD8) = (s64) M2C_FIELD(temp_v0, s64 *, 0xC8), M2C_FIELD(arg0, s64 *, 0xE0) = (s64) M2C_FIELD(temp_v0, s64 *, 0xD0), M2C_FIELD(arg0, s64 *, 0xE8) = (s64) M2C_FIELD(temp_v0, s64 *, 0xD8), (func_00237008(arg0, 0) == 0))) {
            return 0;
        }
        func_00233048(arg0);
        func_00233100(arg0);
        func_00233148(arg0);
        func_002331B8(arg0);
        func_00233228(arg0);
        func_00233288(arg0);
        func_00233480(arg0);
        func_00233550(arg0);
        func_002335F0(arg0);
        func_00237A28(arg0);
        M2C_FIELD(arg0, s64 *, 0) = (s64) arg1;
        M2C_FIELD(arg0, s16 *, 0x10) = (s16) M2C_FIELD(temp_v0, u8 *, 0xF1);
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 1;
    }
    return 1;
}
