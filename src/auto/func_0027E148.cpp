#define DEF_func_0027E148
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_0027E148(void *arg0) {
    s32 var_v0;
    void *temp_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, void **, 4);
        var_v0 = func_0027E260(M2C_FIELD(temp_v0, s32 *, 4), (s32) func_0027E968, 1, (s32) (arg0 + M2C_FIELD(temp_v0, s16 *, 0)), (s32) func_0027DC18, (s32) arg0);
    }
    return var_v0 != 0;
}
