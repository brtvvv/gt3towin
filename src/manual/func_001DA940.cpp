struct A { char d[0x3F0]; }; struct B { char d[0x12A0 - 0x3F0]; }; struct C { char d[0x20]; };
extern char D_0033DC68[], D_002D3F48[];
extern "C" void func_001DAA20(C *); extern "C" void func_001DB218(A *, int, int, int, int, char *); extern "C" void func_001DCEE8(B *, A *, int, int, char *, C *); extern "C" int func_001DA888(B *, int, int, int, int);
extern "C" int func_001DA940(int a, int b, int c, int d, int e) { A x; B y; C z; func_001DAA20(&z); func_001DB218(&x, a, 0, 0, 0, D_0033DC68); func_001DCEE8(&y, &x, 0, 0, D_002D3F48, &z); return func_001DA888(&y, b, c, d, e); }

