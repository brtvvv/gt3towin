#include "m2c.h"
extern "C" s32 func_00220590(void *, s32);                     /* extern */
extern "C" M2C_UNK func_002205B8(void *, s32, s32);            /* extern */
extern "C" M2C_UNK func_00226110(s32, s32);                    /* extern */

extern "C" void func_00220A60(void *arg0) {
    void *temp_s1;

    func_002205B8(M2C_FIELD(arg0, void **, 0x88), M2C_FIELD(arg0, s32 *, 0x8C), M2C_FIELD(arg0, s32 *, 0));
    temp_s1 = M2C_FIELD(arg0, void **, 0x88);
    func_00226110(M2C_FIELD(temp_s1, s32 *, 0x1C), func_00220590(temp_s1, M2C_FIELD(arg0, s32 *, 0)));
}
