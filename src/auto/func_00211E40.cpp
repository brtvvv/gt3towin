#include "m2c.h"
extern "C" void func_00211E40(void *arg0, s32 arg1) {
    if (arg1 & 0x400) {
        M2C_FIELD(arg0, s16 *, 8) = 1;
        M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & 0xFD);
    }
    if (arg1 & 0x800) {
        M2C_FIELD(arg0, s16 *, 0xA) = 1;
        M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & 0xFB);
    }
    if (arg1 & 0x1000) {
        M2C_FIELD(arg0, s16 *, 0xE) = 1;
        M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & 0xEF);
    }
    if (arg1 & 0x2000) {
        M2C_FIELD(arg0, s16 *, 0xC) = 1;
        M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) & 0xF7);
    }
    if (!(arg1 & 0x8000)) {
        M2C_FIELD(arg0, s8 *, 2) = (s8) ((arg1 >> 0xE) & 1);
        return;
    }
    M2C_FIELD(arg0, s8 *, 2) = -1;
}
