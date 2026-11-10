struct R { char p[8]; long x8; };
struct Q { char p[0xE8]; unsigned short xE8; };
struct D { int x0, x4; };
extern D D_002ED3B8[];
extern "C" R *func_00232658(D *, int, long); extern "C" void func_002327C0(int, int);
extern "C" void func_0023B1E0(long a) { R *r = func_00232658(D_002ED3B8, 0x23, a); long x; if (r) x = r->x8; else if ((r = func_00232658(D_002ED3B8, 0x1F, a))) x = r->x8; else x = a; Q *q = (Q *)func_00232658(D_002ED3B8, 0x1E, x); func_002327C0(D_002ED3B8[0].x4, q->xE8); }

