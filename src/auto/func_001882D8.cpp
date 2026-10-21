#define DEF_func_001882D8
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_001882D8(void *arg0) {
    if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x70) == 0)) {
        return arg0 + 0xCB50;
    }
    return arg0 + 0xC8C0;
}
