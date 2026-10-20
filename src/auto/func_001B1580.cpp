#define DEF_func_001B1580
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00333358 __attribute__((section(".data")));

extern "C" void func_001B1580(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &D_00333358;
    func_001B17E8((s32) arg0);
    func_001B17B8((s32) arg0);
    func_001C07B8((s32) (arg0 + 4), 2);
    if (arg1 & 1) {
        func_0027D2F8((s32) arg0);
    }
}
