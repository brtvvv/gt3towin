#define DEF_func_002327D8
#include "m2c.h"
#include "funcs.h"
extern "C" u16 func_002327D8(s32 arg0, s32 arg1) {
    return *(s32 *)(arg0 + M2C_INDEX(arg0, s32, 0x10, arg1));
}
