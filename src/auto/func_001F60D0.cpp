#define DEF_func_001F60D0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001F60D0(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 4) != 0)) {
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x50);
}
