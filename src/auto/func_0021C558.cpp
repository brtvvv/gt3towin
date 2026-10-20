#include "m2c.h"
extern "C" s32 func_0021C558(void *arg0, void *arg1) {
    s32 var_a2;

    var_a2 = 0;
    if ((M2C_FIELD(arg0, s32 *, 0) == M2C_FIELD(arg1, s32 *, 0)) && (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(arg1, s32 *, 4)) && (M2C_FIELD(arg0, s32 *, 8) == M2C_FIELD(arg1, s32 *, 8)) && (M2C_FIELD(arg0, s32 *, 0xC) == M2C_FIELD(arg1, s32 *, 0xC)) && (M2C_FIELD(arg0, s32 *, 0x10) == M2C_FIELD(arg1, s32 *, 0x10)) && (M2C_FIELD(arg0, s32 *, 0x14) == M2C_FIELD(arg1, s32 *, 0x14)) && (M2C_FIELD(arg0, s32 *, 0x18) == M2C_FIELD(arg1, s32 *, 0x18)) && (M2C_FIELD(arg0, s32 *, 0x1C) == M2C_FIELD(arg1, s32 *, 0x1C)) && (M2C_FIELD(arg0, s32 *, 0x20) == M2C_FIELD(arg1, s32 *, 0x20))) {
        var_a2 = M2C_FIELD(arg0, s32 *, 0x24) == M2C_FIELD(arg1, s32 *, 0x24);
    }
    return var_a2;
}
