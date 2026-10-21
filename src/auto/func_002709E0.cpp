#define DEF_func_002709E0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_002709E0(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x74) != 0)) {
        return 0xF;
    }
    return M2C_FIELD(arg0, s32 *, 0x58);
}
