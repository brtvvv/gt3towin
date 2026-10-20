#define DEF_func_001B1060
#include "m2c.h"
#include "funcs.h"
extern "C" void func_001B1060(f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    func_001B0F98(fparg0 + (fparg2 * 0.5f), fparg1 + (fparg3 * 0.5f), fparg2, fparg3);
}
