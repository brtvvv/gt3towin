#define DEF_func_001BA6A0
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_003356C0 __attribute__((section(".data")));

extern "C" void func_001BA6A0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    func_001BC578((s32) arg0, (s32) &D_003356C0);
}
