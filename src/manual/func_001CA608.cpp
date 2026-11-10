struct T { char p[0x28]; float x28; char q[8]; float x34, x38, x3C; char r[0xBC - 0x40]; int xBC; char s[0x104 - 0xC0]; float x104; char u[8]; float x110; };
extern "C" float func_001CA608(T *t) { float z = 0.0f; if (!t->xBC) return t->x110 - (t->x34 - t->x3C * 0.5f) - z; return t->x104 - (t->x28 - t->x38 * 0.5f) - z; }

