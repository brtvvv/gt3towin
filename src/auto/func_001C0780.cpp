#define DEF_func_001C0780
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003361E8 __attribute__((section(".data")));

extern "C" s32 func_001C0780(s32 arg0) {
    func_001C0298(arg0);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_003361E8;
    return arg0;
}
