struct P { int a, b; };
struct M { char p[8]; int x8; char q[0x30 - 0xC]; P x30[2]; P x40[2]; int x50[2]; int x58[2]; };
extern "C" void func_00262DB0(M *, P *, int, int); extern "C" int func_002652A8(int);
extern "C" int func_00262CC8(M *m, int i, int a, int b) { if (m->x8 == 1) { func_00262DB0(m, &m->x30[i], a, b); m->x40[i].a = m->x30[i].a; m->x40[i].b = m->x30[i].b; } else { m->x50[i] = func_002652A8(1); func_00262DB0(m, &m->x30[i], a, b); m->x58[i] = func_002652A8(1); func_00262DB0(m, &m->x40[i], a, b); } return 0; }

