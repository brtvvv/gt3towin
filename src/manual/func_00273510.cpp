struct E { char p[0x10]; int x10; char q[8]; }; struct A { E e[4]; }; extern A D_004AD290[];
struct R { char p[0x58]; int x58; char q[0x15]; unsigned char x71; };
extern "C" R *func_002732C8(int, int);
extern "C" int func_00273510(int a, int b) { if (!D_004AD290[a].e[b].x10) return 0; return func_002732C8(a, b)->x71; }

