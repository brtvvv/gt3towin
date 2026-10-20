#define DEF_func_001F61F8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F61F8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 1) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
        func_001F5F38((s32) arg0, 0);
    }
    func_001F53F0((s32) (arg0 + 8));
}
