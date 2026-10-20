#define DEF_func_00144690
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0031D5D8 __attribute__((section(".data")));

extern "C" void func_00144690(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0031D5D8;
    if (M2C_FIELD(arg0, s32 *, 0x230) != 0) {
        func_00144930((s32) arg0, 0);
    }
    func_00143208((s32) arg0, arg1);
}
