#define DEF_func_00186500
#include "m2c.h"
#include "funcs.h"
extern s32 D_002C59BC __attribute__((section(".data")));
extern M2C_UNK D_002F2F98 __attribute__((section(".data")));
extern M2C_UNK D_00353818 __attribute__((section(".data")));

extern "C" void func_00186500(void) {
    func_00252500(6);
    func_0025B158(0x40000010);
    func_0023D088(320.0f, 300.0f, 300.0f, 80.0f);
    func_0023DC50((s32) &D_002F2F98, (s32) &D_00353818);
    func_0023E130((s32) &D_002F2F98, 0x804040FF);
    func_0023DFD8((s32) &D_002F2F98, 0x140, 0x12C);
    func_0023DE20((s32) &D_002F2F98, 0xF);
    func_0023E6E0((s32) &D_002F2F98, D_002C59BC);
    func_0023DE20((s32) &D_002F2F98, 0);
}
