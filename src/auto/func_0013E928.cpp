#define DEF_func_0013E928
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0013E928(void *arg0) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0x100);
    if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u8 *, 0xED5) != 0)) {
        func_001BB688((s32) arg0);
    }
}
