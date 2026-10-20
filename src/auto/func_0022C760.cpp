#include "m2c.h"
extern "C" M2C_UNK func_0022BC30();                            /* extern */
extern "C" M2C_UNK func_0022C0D8();                            /* extern */
extern "C" s32 func_0026AD68(M2C_UNK);                         /* extern */
extern s32 D_00354500;

extern "C" void func_0022C760(void) {
    D_00354500 = func_0026AD68(1);
    func_0022BC30();
    func_0022C0D8();
}
