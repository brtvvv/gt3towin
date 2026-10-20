#include "m2c.h"
extern "C" void func_00181F00(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x9790) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC880) == 0) ? 0 : arg1);
}
