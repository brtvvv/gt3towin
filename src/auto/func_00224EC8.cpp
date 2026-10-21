#define DEF_func_00224EC8
#include "m2c.h"
#include "funcs.h"
extern void *D_00354464;

extern "C" s32 func_00224EC8(void *arg0) {
    return *(s32 *)((M2C_FIELD(arg0, s32 *, 0x178) * 0x10) + M2C_FIELD(D_00354464, s32 *, 0x20)) & 1;
}
