struct I { char p[0x11]; unsigned char x11; };
struct G { char p[0x540]; char *x540; };
struct P { char p[0xE40]; char xE40[0xF48 - 0xE40]; int xF48; };
struct R { int a, b, c, d; void *fn; int x14, x18, x1C; };
extern "C" char *func_00219680(); extern "C" I *func_002359F8(char *); extern "C" void func_00165F38(char *, int, int *, int *, int *, int *); extern "C" void func_001662D0();
extern "C" R func_00166338(P *p) return r { int k = 2; char *o = ({ G *_g = (G *)(func_00219680() + 0x307C8); _g; })->x540; if (o && !(func_002359F8(o + 0x10)->x11 < k)) { int a, b, c, d; func_00165F38(p->xE40, k, &a, &b, &c, &d); int b1 = b + 1; void *fn = (void *)func_001662D0; int d1 = d + 1; int pc = p->xF48; r.a = a; r.b = b1; r.c = pc; r.d = 1; r.fn = fn; r.x18 = c; r.x1C = d1; r.x14 = 0; } else { r.fn = (void *)func_001662D0; r.a = 0; r.b = 1; r.d = 1; r.c = 0; r.x14 = 0; r.x18 = 0; r.x1C = 0; } }
