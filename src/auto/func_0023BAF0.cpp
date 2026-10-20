#include "m2c.h"
extern "C" void func_0023BAF0(void *arg0, s32 *arg1, s32 *arg2) {
    s8 temp_a2;

    *arg2 = M2C_FIELD(arg0, s8 *, 6) - 0x31;
    temp_a2 = M2C_FIELD(arg0, s8 *, 2);
    switch (temp_a2) {                              /* irregular */
    case 0x41:
        if (M2C_FIELD(arg0, s8 *, 1) == 0x49) {
            *arg1 = 0xC;
            return;
        }
        *arg1 = 0xA;
        return;
    case 0x42:
        if (M2C_FIELD(arg0, s8 *, 1) == 0x49) {
            *arg1 = 0xB;
            return;
        }
        *arg1 = 9;
        return;
    case 0x53:
        *arg1 = 0xD;
        return;
    case 0x52:
        *arg1 = 0xE;
        return;
    }
}
