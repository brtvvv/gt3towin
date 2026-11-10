struct R { char p[0xEC]; int xEC; };
struct T { long x0; char p[0x1C8]; char x1D0[4]; };
extern "C" R *func_00232658(char *, int, long); extern "C" int func_00232700(char *);
extern "C" int func_00238C40(T *t) { char *p = t->x1D0; int v = func_00232658(p, 0x1E, t->x0)->xEC; if (func_00232700(p)) v *= 100; return v; }

