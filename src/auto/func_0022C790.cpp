#include "m2c.h"
extern "C" M2C_UNK func_0022BC88();                            /* extern */
extern "C" M2C_UNK func_0022C2A0();                            /* extern */
extern "C" M2C_UNK func_0022CA98();                            /* extern */
extern "C" M2C_UNK func_00286EB0(s32);                         /* extern */
extern s32 D_00354500;

extern "C" void func_0022C790(void) {
    func_0022CA98();
    func_0022C2A0();
    func_0022BC88();
    func_00286EB0(D_00354500);
    D_00354500 = -1;
}
