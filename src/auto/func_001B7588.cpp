#include "m2c.h"
extern "C" M2C_UNK func_00253458(M2C_UNK);                     /* extern */
extern s32 D_003540E0;

extern "C" void func_001B7588(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xAE0), s32 *, 0x20) = 1;
    func_00253458(4);
    D_003540E0 = 1;
}
