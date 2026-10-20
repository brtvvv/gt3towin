#define DEF_func_00189E50
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032D3F0 __attribute__((section(".data")));

extern "C" s32 func_00189E50(s32 arg0) {
    func_001874B8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x54) = &D_0032D3F0;
    return arg0;
}
