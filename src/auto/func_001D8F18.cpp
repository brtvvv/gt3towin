#define DEF_func_001D8F18
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001D8F18(void *arg0) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_v1 != NULL) {
        temp_v0 = M2C_FIELD(temp_v1, void **, 0x1C);
        return func_0027E260(M2C_FIELD(temp_v0, s32 *, 4), (s32) func_001D9038, 1, (s32) (temp_v1 + M2C_FIELD(temp_v0, s16 *, 0)), (s32) func_001C1060, (s32) temp_v1);
    }
    return 0;
}
