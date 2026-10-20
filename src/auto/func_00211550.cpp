#define DEF_func_00211550
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00341120 __attribute__((section(".data")));

extern "C" void func_00211550(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC0) = &D_00341120;
    func_001F5E68((s32) (arg0 + 0xC4), 2);
    func_0022EBC8((s32) arg0, arg1);
}
