#define DEF_func_001D3CD0
#include "m2c.h"
#include "funcs.h"
extern "C" s32 func_001D3CD0(s32 arg0, void *arg1) {
    void *temp_v1;

    if (func_001D8990(arg0) != 0) {
        if (M2C_FIELD(arg1, s32 *, 0xE8) != 0) {
            temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
            M2C_FIELD(temp_v1, M2C_UNK (**)(s32, M2C_UNK, M2C_UNK), 0xA4)(arg0 + M2C_FIELD(temp_v1, s16 *, 0xA0), 7, 0);
            return 0;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 1;
    }
    return 1;
}
