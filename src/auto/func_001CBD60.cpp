#include "m2c.h"
extern "C" M2C_UNK func_00245620(void *, s32);                 /* extern */
extern "C" M2C_UNK func_00245E38(void *);                      /* extern */
extern s32 D_003540F0;

extern "C" void func_001CBD60(s32 arg0) {
    s32 temp_s2;
    void *temp_s0;
    void *temp_s1;

    temp_s2 = D_003540F0;
    temp_s1 = arg0 + 0x4C;
    func_00245620(temp_s1, temp_s2);
    temp_s0 = arg0 + 0x14;
    M2C_FIELD(temp_s1, s32 *, 4) = 0;
    func_00245E38(temp_s1);
    func_00245620(temp_s0, temp_s2);
    M2C_FIELD(temp_s0, s32 *, 4) = 0;
    func_00245E38(temp_s0);
}
