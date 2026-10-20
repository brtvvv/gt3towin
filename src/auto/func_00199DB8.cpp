#define DEF_func_00199DB8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00330308 __attribute__((section(".data")));

extern "C" s32 func_00199DB8(s32 arg0) {
    func_00198280(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00330308;
    M2C_FIELD(arg0, f32 *, 0x44) = -1.0f;
    return arg0;
}
