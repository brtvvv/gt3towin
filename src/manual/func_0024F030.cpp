struct P { char p[8]; unsigned char x8, x9; };
struct T { char p[0xC]; int xC, x10, x14; char q[0xA60 - 0x18]; float xA60, xA64; };
extern "C" void func_002504C8(T *); extern "C" void func_00250778(T *);
extern "C" void func_0024F030(T *t, P *p) { unsigned v = p->x8; t->xC = 0x4E; t->x14 = 0; unsigned lo = v & 0x1F; int hi = v >> 5; float f = 128.0f; if (p->x9 & 1) f = 255.0f; t->xA60 = f; f = 128.0f; if (p->x9 & 2) f = 255.0f; t->xA64 = f; switch (lo) { case 0: case 1: case 4: case 5: break; case 2: func_002504C8(t); break; case 3: func_00250778(t); break; } t->x10 = 0; switch (hi) { case 0: break; case 1: t->x10 = -2; break; case 2: t->x10 = -4; break; case 3: t->x10 = -6; break; } }

