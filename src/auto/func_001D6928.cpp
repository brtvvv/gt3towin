#define DEF_func_001D6928
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001D6928(void *arg0) {
    void *temp_v0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 0x1C);
        return func_0027E260(M2C_FIELD(temp_v0, s32 *, 4), (s32) func_001D69F8, 1, (s32) (arg0 + M2C_FIELD(temp_v0, s16 *, 0)), (s32) func_001D9038, (s32) arg0);
    }
    return 0;
}
