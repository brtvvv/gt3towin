extern char D_002D40C0[];
extern "C" void func_001DAA20(int *);
extern "C" float func_001D9D60(void *, float), func_001DBC38(char *, int *);
extern "C" float func_001E1AF0(void *s, int *p, float x) { int tmp[8]; func_001DAA20(tmp); if (!p) p = tmp; float a = func_001D9D60(s, x); return a * func_001DBC38(D_002D40C0, p); }

