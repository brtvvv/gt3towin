#include "m2c.h"
struct N { int a; N *next; N *child; char p[8]; int x14; char q[4]; VTE *vt; };
extern "C" N **func_001C0AB8(int ctx, N **out, N *n) {
    for (; n; n = n->next) {
        if (n->x14 == 0 && VFN(n, 0x1C, 3)(VTHIS(n, 0x1C, 3))) {
            *out++ = n;
            if (n->child) out = func_001C0AB8(ctx, out, n->child);
        }
    }
    return out;
}
