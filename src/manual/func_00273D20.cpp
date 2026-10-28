struct E { char p[0x10]; int v; char q[8]; };
extern E D_004AD290[][4];
extern "C" int func_00273C10(int, int, int);
extern "C" int func_00273D20(int a, int b) { if (!D_004AD290[a][b].v) return 0; return func_00273C10(a, b, 0xFFF); }

