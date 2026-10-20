#define DEF_func_0023C320
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003132A0 __attribute__((section(".data")));
extern M2C_UNK D_003132B0 __attribute__((section(".data")));

extern "C" void func_0023C320(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = &D_003132A0;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_003132B0;
    func_002389D8((s32) (arg0 + 0x10), 0);
    func_00125B18((s32) arg0, arg1);
}
