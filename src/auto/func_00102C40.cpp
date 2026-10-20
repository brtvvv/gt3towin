#define DEF_func_00102C40
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0030A508 __attribute__((section(".data")));

extern "C" void func_00102C40(s32 arg0, s32 arg1) {
    func_001905A8();
    func_001AAAF0();
    func_001F5CA8(arg0, arg1);
    func_00190660();
    func_002230A8((s32) &D_0030A508);
    func_001B0960();
}
