#define DEF_func_00115EA4
#include "m2c.h"
#include "funcs.h"
extern "C" void func_00115EA4(s32 unused0, s32 unused1, s32 arg2, s32 *arg3) {
    switch (arg2) {                                 /* irregular */
    case 0:
        *arg3 = 9;
        return;
    case 1:
        *arg3 = 5;
        return;
    case 2:
        *arg3 = arg2;
        return;
    }
}
