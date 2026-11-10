struct R { char p[0x10]; unsigned char x10; };
struct T { char p[0xC8]; long xC8; char q[0x1D0 - 0xD0]; char x1D0[4]; };
extern "C" R *func_00232658(char *, int, long); extern "C" int func_002350C8(T *);
extern "C" int func_00235178(T *t) { int v = 0; if (t->xC8) v = func_00232658(t->x1D0, 0x14, t->xC8)->x10; if (func_002350C8(t)) v += 4; return v; }

