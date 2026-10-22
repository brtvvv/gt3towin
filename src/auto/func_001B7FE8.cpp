#define DEF_func_001B7FE8
#include "m2c.h"
#include "funcs.h"
extern s32 D_003540E4;
extern s32 D_003540E8;

extern "C" void func_001B7FE8(s32 unused0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0xB50) = 0.0f;
    D_003540E8 = 1;
    D_003540E4 = 0;
}
