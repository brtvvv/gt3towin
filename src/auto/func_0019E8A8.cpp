#define DEF_func_0019E8A8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032FC78 __attribute__((section(".data")));
extern M2C_UNK D_00330F68 __attribute__((section(".data")));

extern "C" void func_0019E8A8(void *arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = arg0 + 0x20;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_00330F68;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x14) = &D_0032FC78;
    func_00197418((s32) temp_v0, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0032FC78;
    func_00197418((s32) arg0, arg1);
}
