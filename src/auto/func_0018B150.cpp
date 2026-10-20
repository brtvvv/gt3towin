#define DEF_func_0018B150
#include "m2c.h"
#include "funcs.h"
extern M2C_UNK D_0032DF68 __attribute__((section(".data")));

extern "C" void func_0018B150(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &D_0032DF68;
    func_0022AD80((s32) arg0, arg1);
}
