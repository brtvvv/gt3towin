#include "m2c.h"
extern "C" M2C_UNK func_00253458(M2C_UNK);                     /* extern */
extern s32 D_003540E0;

extern "C" void func_001B75C0(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xAE0), s32 *, 0x20) = 0;
    func_00253458(1);
    D_003540E0 = 0;
}
