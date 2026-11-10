struct E { int x0, x4; }; struct S { int x0, x4; E **x8; };
extern "C" S *func_0021EB30(int, int); extern "C" int func_0021E8E0(int, int *, E *);
extern "C" int func_0021EB80(int a, int b, int i, int *o) { S *s = func_0021EB30(a, b); if (o) *o = 0; if (i < 0) return 0; if (i < s->x4) { E *e = s->x8[i]; return func_0021E8E0(e->x4, o, e); } return 0; }

