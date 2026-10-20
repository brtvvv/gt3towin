#define DEF_func_001AC438
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002C4518 __attribute__((section(".data")));
extern M2C_UNK D_0032F670 __attribute__((section(".data")));

extern "C" void func_001AC438(void) {
    func_0022DA30((s32) &D_002C4518);
    M2C_FIELD(&D_002C4518, M2C_UNK **, 0x18) = &D_0032F670;
}
