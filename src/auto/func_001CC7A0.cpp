#include "m2c.h"
extern "C" M2C_UNK func_001C0B90(void *);                      /* extern */
extern "C" M2C_UNK func_001CC520();                            /* extern */
extern "C" M2C_UNK func_001CC720(void *, s32);                 /* extern */
extern s32 D_003540E0;

extern "C" void func_001CC7A0(void *arg0, s32 arg1) {
    if (D_003540E0 == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
            func_001CC520();
            func_001C0B90(arg0 + 4);
            func_001CC720(arg0, arg1);
        }
    }
}
