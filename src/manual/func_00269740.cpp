struct E { char p[0x1B]; char x1B; };
struct S { int x0; short p4; short x6; char x8; char p9[0x18 - 9]; E e[47]; };
extern S D_00300FE8[]; extern int D_00354B4C;
extern "C" void func_0027ED70(void *, int, int); extern "C" void func_002697D0(int);
extern "C" void func_00269740() { if (D_00354B4C) return; S *s = D_00300FE8; func_0027ED70(s, 0, 0x53C); D_00300FE8[0].x0 = 0; s->x6 = 0x3FFF; s->x8 = 0; E *e = s->e; for (int i = 46; i >= 0; i--) { e->x1B = -1; e++; } func_002697D0(0x3C); D_00354B4C = 1; }

