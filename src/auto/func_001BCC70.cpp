#define DEF_func_001BCC70
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001BCC70(s32 unused0, void *arg1, s32 arg2) {
    func_001C0768(arg2);
    return M2C_FIELD(arg1, s32 *, 0x2C);
}
