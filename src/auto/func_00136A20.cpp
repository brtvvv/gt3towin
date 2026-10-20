#include "m2c.h"
extern "C" M2C_UNK func_0016D6C0(s32);                         /* extern */
extern "C" M2C_UNK func_001CC7A0(void *, s32);                 /* extern */
extern s32 D_003540E4;
extern s32 D_003540E8;

extern "C" void func_00136A20(void *arg0, s32 arg1) {
    s32 temp_a0;

    D_003540E8 = 0;
    D_003540E4 = 0;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x58);
    if (temp_a0 != 0) {
        func_0016D6C0(temp_a0);
    }
    func_001CC7A0(arg0, arg1);
}
