#include "m2c.h"
extern "C" s32 func_001780A0(void *);                          /* extern */
extern "C" M2C_UNK func_001AA6E8(s32);                         /* extern */

extern "C" void func_0017E630(void *arg0) {
    void *temp_s0;
    void *temp_v1;

    func_001AA6E8(*M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 **, 0x38));
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x18);
    if (M2C_FIELD(temp_v1, s32 *, 0) == 2) {
        temp_s0 = M2C_FIELD(M2C_FIELD(temp_v1, void **, 8), void **, 4);
        if (func_001780A0(temp_s0) != 0) {
            M2C_FIELD(temp_s0, s32 *, 0x18A4) = (s32) M2C_FIELD(temp_s0, s32 *, 0x18);
        }
    }
}
