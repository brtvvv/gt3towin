#define DEF_func_001266B8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001266B8(s32 unused0, s32 arg1) {
    void *temp_s0;

    temp_s0 = func_00219680() + 0x307C8;
    M2C_FIELD(temp_s0, s32 *, 0x5D8) = func_001B3B28(arg1);
}
