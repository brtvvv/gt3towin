#define DEF_func_001C7BD8
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00338100 __attribute__((section(".data")));
extern M2C_UNK D_00338120 __attribute__((section(".data")));

extern "C" void func_001C7BD8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x108) = &D_00338100;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &D_00338120;
    func_001BAB98((s32) (arg0 + 0x364), 2);
    func_001BAB98((s32) (arg0 + 0x264), 2);
    func_001BAB98((s32) (arg0 + 0x164), 2);
    func_001B4D68((s32) arg0, 0);
    if (arg1 & 1) {
        func_001C0360((s32) arg0);
    }
}
