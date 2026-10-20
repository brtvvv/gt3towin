#include "m2c.h"
extern "C" M2C_UNK func_001AB2A0(void *, f32);                 /* extern */
extern "C" M2C_UNK func_0021FEF8(void *);                      /* extern */
extern "C" M2C_UNK func_0021FF28(void *);                      /* extern */
extern "C" M2C_UNK func_0021FF50(void *);                      /* extern */
extern "C" M2C_UNK func_00256088();                            /* extern */
extern "C" M2C_UNK func_00256108();                            /* extern */

extern "C" void func_001AB620(void *arg0, s32 arg1, f32 fparg0) {
    void *temp_s2;

    temp_s2 = arg0 + 4;
    M2C_FIELD(temp_s2, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x6B0);
    func_00256088();
    func_0021FEF8(temp_s2);
    if (arg1 != 0) {
        func_001AB2A0(arg0, fparg0);
    }
    func_0021FF50(temp_s2);
    func_0021FF28(temp_s2);
    func_00256108();
}
