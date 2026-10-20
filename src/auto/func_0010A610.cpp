#define DEF_func_0010A610
#include "m2c.h"
#include "funcs.h"
extern "C" void func_0010A610(void *arg0, s32 arg1) {
    if (arg1 != 2) {
        func_0010A568((s32) arg0, (s32) (arg0 + 0xE50), M2C_FIELD(arg0, s32 *, 0x38DC), (s32) (arg0 + 0x3914));
        return;
    }
    func_0010A568((s32) arg0, (s32) (arg0 + 0x2388), M2C_FIELD(arg0, s32 *, 0x3974), (s32) (arg0 + 0x39AC));
}
