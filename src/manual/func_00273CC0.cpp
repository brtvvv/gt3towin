struct E { char p[0x10]; int x10; char q[8]; }; struct A { E e[4]; }; extern A D_004AD290[];
extern "C" int func_00273B58(int, int);
extern "C" int func_00273CC0(int a, int b) { if (!D_004AD290[a].e[b].x10) return 0; return func_00273B58(a, b) == 0x3FFFF; }

