#define DEF_func_00220048
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00220048(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        func_00226C78((s32) arg0);
        func_00226110(M2C_FIELD(arg0, s32 *, 0x24), 7);
        func_00226C78(0);
    }
}
