struct S { int x0, x4, x8; unsigned xC; };
extern "C" S *func_0023A1C0(char **, int);
extern "C" unsigned func_0023A2A8(char **t, int b, int i) { S *s = func_0023A1C0(t, b); if (!s || i >= s->x8) return 0xFFFFFFFFu; char *base = *t; return ((unsigned *)(base + *(int *)(base + 0xC) + (s->xC >> 2 << 2)))[i]; }

