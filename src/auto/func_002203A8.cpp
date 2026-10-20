#define DEF_func_002203A8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_002203A8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        func_00226C78((s32) arg0);
        func_00256D70(0.0f, 0.0f, 0.0f, 0.0f);
        func_00256D50(1.0f, 1.0f, 1.0f, 1.0f);
        func_00226110(M2C_FIELD(arg0, s32 *, 0x24), 6);
        func_00226C78(0);
    }
}
