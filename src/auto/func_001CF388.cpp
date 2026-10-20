#include "m2c.h"
extern "C" M2C_UNK func_001CE988(void *);                      /* extern */
extern "C" M2C_UNK func_001CECB0(void *);                      /* extern */
extern "C" M2C_UNK func_001D1380();                            /* extern */

extern "C" void func_001CF388(void *arg0) {
    s32 temp_v1;

    if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        func_001D1380();
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x100);
        switch (temp_v1) {                          /* irregular */
        case 0:
            func_001CE988(arg0);
            break;
        case 1:
            func_001CECB0(arg0);
            break;
        }
    }
}
