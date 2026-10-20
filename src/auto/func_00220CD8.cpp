#define DEF_func_00220CD8
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00220CD8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        func_00252790(4);
        func_00252790(3);
        func_00252500(5);
        func_00253A98(0);
        func_00253908(0x44, 1.0f);
        func_0024E150(M2C_FIELD(arg0, s32 *, 0x24));
        func_00253A98(1);
    }
}
