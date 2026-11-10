struct S { int x0, x4, x8, xC, x10, x14; char p[8]; };
extern int D_003098D4[];
extern "C" int func_00286EA0(S *);
extern "C" void func_0028A9D8() { if (D_003098D4[0] == -1) { S s; s.x14 = 0; s.x8 = 1; s.x4 = 1; D_003098D4[0] = func_00286EA0(&s); } }

