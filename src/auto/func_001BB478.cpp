#define DEF_func_001BB478
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_002F2F98 __attribute__((section(".data")));

extern "C" void func_001BB478(void *arg0) {
    if ((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xE4), void **, 0x68), u16 *, 2) & 0xF0) == 0x10) {
        func_001D32A8();
    }
    func_0023DE20((s32) &D_002F2F98, 0);
}
