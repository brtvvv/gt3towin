#define DEF_func_001C8858
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001C8858(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 4);
    if (temp_v0 == NULL) {
        return 0;
    }
    return func_001C87C0(M2C_FIELD(temp_v0, s32 *, 0x108), M2C_FIELD(temp_v0, s32 *, 0x104), arg1);
}
