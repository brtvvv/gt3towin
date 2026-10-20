#define DEF_func_00191328
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032F720 __attribute__((section(".data")));

extern "C" s32 func_00191328(s32 arg0) {
    func_00191270(arg0);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_0032F720;
    return arg0;
}
