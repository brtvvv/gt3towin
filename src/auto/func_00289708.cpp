#define DEF_func_00289118
#define DEF_func_00289708
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00289118(void);
extern s32 D_00309848 __attribute__((section(".data")));

extern "C" void func_00289708(void) {
    func_00289118();
    D_00309848 = 0;
}
