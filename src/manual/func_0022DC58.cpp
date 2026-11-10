struct S { char p[0x40]; int x40, x44, x48; char q[4]; };
extern int D_00354654, D_00354674, D_00354630, D_0035464C;
extern "C" void func_00270070(S *);
extern "C" void func_0022DC58() { S s; func_00270070(&s); D_00354654 = s.x40; D_00354674 = 1; if (D_00354630 == -1) { D_0035464C = 0; return; } if (!D_0035464C) { if (s.x48) D_0035464C = 3; else D_0035464C = 2; } }

