#define DEF_func_00249640
#include "m2c.h"
#include "funcs.h"
void func_00249640(s32 arg0, void *arg1, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4) {
    if (!(fparg4 <= 0.0f)) {
        func_00253A98(0);
        func_00252790(5);
        func_00252790(0xF);
        func_00252790(4);
        func_00253908(0x48, 0.0f);
        func_00256088();
        func_00258CA4();
        func_00258FD4(M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8));
        func_00258C7C();
        func_00259024(fparg4, fparg4, fparg4);
        func_00248EF8(arg0, func_00247AE8(), fparg0, fparg1, fparg2, fparg3);
        func_00256108();
        func_00253A98(1);
        func_00252500(0xF);
    }
}
