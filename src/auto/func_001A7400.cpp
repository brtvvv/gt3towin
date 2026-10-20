#define DEF_func_001A7400
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001A7400(void *arg0) {
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 0x20);
    if (temp_a2 != NULL) {
        M2C_FIELD(temp_a2, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(temp_a2, s32 *, 0x18) = (s32) (M2C_FIELD(temp_a2, s32 *, 0x18) - M2C_FIELD(arg0, s32 *, 0x14));
    }
}
