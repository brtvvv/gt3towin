struct R { int a, b; };
struct S { char p[0x3C]; int h; };
extern "C" int func_00240048(int);
extern "C" long func_00151178(S *, int);
extern "C" long func_00159E38(S *s, int x) { if (func_00240048(s->h) != 2) { R r; r.a = 8; r.b = 0; return *(long *)&r; } return func_00151178(s, x); }

