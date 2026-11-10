struct S { char p[0x68]; char m[0x11C - 0x68]; int x11C; };
extern S D_004ACB40;
extern "C" void func_00286EE0(int); extern "C" void func_00286EC0(int); extern "C" int func_00289F98(char *); extern "C" int func_00289DA8(char *, int, int, int, int, int, int, int, int);
extern "C" int func_0026FDC8() { S *s = &D_004ACB40; func_00286EE0(s->x11C); if (func_00289F98(s->m)) { func_00286EC0(s->x11C); return 1; } int r = func_00289DA8(s->m, 0x40000000, 1, 0, 0, 0, 0, 0, 0); func_00286EC0(s->x11C); return r; }

