#define DEF_func_00218E08
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_00354420 __attribute__((section(".data")));

s8 *func_00218E08(s8 *arg0, void *arg1) {
    if (*arg0 == 0) {
        strcpy((char *)(arg1), "root");
    } else {
        func_0027FDBC((s32) arg1, (s32) arg0);
    }
    return arg0;
}
