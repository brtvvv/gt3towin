#define DEF_func_0026BC28
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0026BC28(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = (arg1 + 0xF) & ~0xF;
    temp_v0 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0) = temp_v1;
    M2C_FIELD(arg0, s32 *, 8) = temp_v1;
    M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_v1 + ((arg2 - (temp_v1 - arg1)) & 0xFFFFFFF0));
    M2C_FIELD(arg0, s32 *, 0xC) = temp_v1;
    *(s32 *)temp_v1 = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0), s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0), s32 *, 8) = 0;
    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0), s32 *, 0xC) = 0;
    return temp_v0;
}
