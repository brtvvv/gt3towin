#define DEF_func_001F1568
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001F1568(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, u8 *, 0x1464) != 0) {
        func_001ED420((s32) arg1);
        return;
    }
    func_001F0840(arg0, (s32) arg1);
}
