#define DEF_func_0014F988
#include "m2c.h"
#include "funcs.h"
extern "C" void *func_0014F988(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x54);
    if (temp_a1 < 0) {
        return NULL;
    }
    return (temp_a1 == 0) ? (arg0 + 8) : (arg0 + 0x2C);
}
