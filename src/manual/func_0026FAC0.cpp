struct S8 { char d[8]; };
struct S { int x0, x4; S8 *x8; char p[0x68 - 0xC]; char m[0x11C - 0x68]; int x11C; };
extern S D_004ACB40;
extern "C" int func_00289F98(char *); extern "C" int func_00289DA8(char *, int, int, S8 *, int, int, int, int, int); extern "C" void func_00286EE0(int); extern "C" void func_00270298(int, S8 *); extern "C" void func_00286EC0(int);
extern "C" int func_0026FAC0(S8 *k) { S *s = &D_004ACB40; char *m = s->m; if (func_00289F98(m)) return 1; *s->x8 = *k; int r = func_00289DA8(m, 0, 0, s->x8, 8, 0, 0, 0, 0); func_00286EE0(s->x11C); func_00270298(0, k); func_00286EC0(s->x11C); return r; }

