#define DEF_func_001F2F98
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F2F98(s32 unused0, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    if (arg1 == 0) {
        *arg2 = 6;
        *arg3 = 0;
        *arg4 = 0;
        return;
    }
    *arg2 = 5;
    *arg3 = -((arg1 * 0xC8) + 0x12C);
    *arg4 = 0x78;
}
