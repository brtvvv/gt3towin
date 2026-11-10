struct T { char p[0x20]; unsigned char x20; char q[0xA60 - 0x21]; float xA60; };
extern "C" void func_0024FF88(T *); extern "C" void func_00250088(T *); extern "C" void func_00250320(T *); extern "C" void func_00258A30(T *, int, int, int, int);
extern "C" void func_00250D50(T *t, int a, int b, int c, int f, int d) { if (f) t->xA60 = 128.0f; else t->xA60 = 255.0f; if (t->x20 & 1) func_0024FF88(t); if (t->x20 & 2) func_00250088(t); if (t->x20 & 4) func_00250320(t); func_00258A30(t, a, b, c, d); }

