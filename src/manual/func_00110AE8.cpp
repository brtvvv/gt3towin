// @flags -fexceptions
#include "../../include/eh_heap.h"
extern char D_0030D708[], D_0030D718[], D_0030D728[], D_0030D738[], D_0030D748[], D_0030D758[], D_0030D768[];
extern "C" char *func_00219680();
extern "C" void *func_0021EE60();
extern "C" void *func_0021E528(void *, int, char *);
extern "C" int func_00232210(void *);
extern "C" int func_00217710(char *, char *, int);
struct X { HEAPOPS char d[0x100]; X(char *, int, int); };
extern "C" X *func_00110AE8(int p0, int p1, int p2, int p3, int p4, int p5) {
    char *name = 0;
    int ok = 0;
    int id = func_00232210(func_0021E528(func_0021EE60(), p4, D_0030D708));
    char *g = func_00219680() + 0x23BB8;
    switch (p5) {
    case 0: name = D_0030D718; if (!func_00217710(g, D_0030D728, id) || !func_00217710(g, D_0030D738, id) || !func_00217710(g, D_0030D748, id)) ok = 1; break;
    case 1: name = D_0030D758; if (!func_00217710(g, D_0030D738, id) || !func_00217710(g, D_0030D748, id)) ok = 1; break;
    case 2: name = D_0030D768; if (!func_00217710(g, D_0030D748, id)) ok = 1; break;
    }
    if (ok) return new X(name, p1, p3);
    return 0;
}

