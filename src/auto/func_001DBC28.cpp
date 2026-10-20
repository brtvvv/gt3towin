#define DEF_func_001DBC28
#include "m2c.h"
#include "funcs.h"
extern "C" f32 func_001DBC28(s32 unused0, void *arg1) {
    return M2C_FIELD(arg1, f32 *, 0x16A8) * M2C_FIELD(arg1, f32 *, 0xEC0);
}
