#include "m2c.h"
extern "C" M2C_UNK func_00212A08(s32);                         /* extern */
extern "C" M2C_UNK func_0026D3B0(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00354C58;

extern "C" void func_00212A48(s32 arg0) {
    func_00212A08(arg0 - 1);
    func_0026D3B0(&D_00354C58);
}
