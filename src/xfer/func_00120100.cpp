#define DEF_func_00120100
#include "m2c.h"
#include "funcs.h"
extern "C" char *strcpy(char *, const char *);
extern char *D_00352C48;
extern "C" void func_00120100(s32 unused0, char *buf) {
    s32 p = func_00219F60(func_00219680());
    if (p != 0) {
        s32 q = p + 0x10;
        if (func_00238C20(q, 0x1F) != 0) {
            func_0027FDBC((s32) buf, (s32) D_00352C48);
            return;
        }
        s32 v = func_00238C98(q, 0x1F);
        if (v >= 0) {
            func_0023C8E8((s32) buf, v);
            return;
        }
    }
    strcpy(buf, "----");
}
