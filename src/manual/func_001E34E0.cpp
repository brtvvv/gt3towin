struct M { char d[0xC0]; }; struct N { char d[0x20]; };
extern "C" void func_001DAA20(N *); extern "C" void func_001E2018(M *, int, int, int); extern "C" void func_001E2BC8(int, M *, M *, int); extern "C" void func_001E2418(M *, float *, M *); extern "C" void func_001E3380(M *, M *, int);
extern "C" int func_001E34E0(int a, int b, float *f, M *m) { M m0, m1; N m2; func_001DAA20(&m2); if (!m) m = (M *)&m2; func_001E2018(&m1, a, 0, 0); func_001E2BC8(a, &m0, &m1, 0); func_001E2418(&m1, f, m); func_001E3380(&m0, &m1, b); return (int)*f; }

