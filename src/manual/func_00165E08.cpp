struct I { char p[0x1D]; unsigned char x1D, x1E; };
struct O { char p[0x198]; int x198; };
struct G { char p[0x540]; char *x540; };
struct R { int a, b, c, d; void *fn; int x14, x18, x1C; };
extern "C" char *func_00219680(); extern "C" int func_00236040(char *); extern "C" I *func_00235AB0(O *); extern "C" void func_00165DA0();
extern "C" R func_00165E08(char *p) return r { char *o = ({ G *_g = (G *)(func_00219680() + 0x307C8); _g; })->x540; if (o && func_00236040(p + 0xE50) != 0x23) { O *q = (O *)(o + 0x10); int a = func_00235AB0(q)->x1D; int b = func_00235AB0(q)->x1E; int b1 = b + 1; int c = q->x198; void *fn = (void *)func_00165DA0; r.a = a; r.b = b1; r.c = c; r.d = 1; r.fn = fn; r.x14 = 0; r.x18 = 0; r.x1C = 0; } else { r.fn = (void *)func_00165DA0; r.a = 0; r.b = 1; r.d = 1; r.c = 0; r.x14 = 0; r.x18 = 0; r.x1C = 0; } }

