#include "m2c.h"
extern "C" M2C_UNK func_00101A58(void *);                      /* extern */
extern "C" M2C_UNK func_00253458(M2C_UNK);                     /* extern */
extern "C" s32 func_00286D90();                                /* extern */
extern "C" M2C_UNK func_00286DC0();                            /* extern */
extern "C" M2C_UNK func_00286DF0(s32);                         /* extern */

extern "C" void func_001AE9F0(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00286D90();
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = temp_v0;
    func_00286DF0(func_00286D90());
    func_00101A58(arg0);
    func_00286DC0();
    func_00253458(1);
}
