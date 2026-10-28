struct S { char p[0x238]; long a, b, c; char q[0x34]; int x; int y; };
extern "C" int func_0023AFD8(long), func_0023AFB0(long);
// 4 roznice na koncu (or s0 + daddu v0)
extern "C" unsigned func_001461B0(S *s) { int u = func_0023AFD8(s->c); int v = func_0023AFB0(s->b); return (u << 12 | s->x << 21) | (s->y << 26 | v); }
