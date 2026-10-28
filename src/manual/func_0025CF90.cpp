struct S { int h; };
extern "C" void func_00286EE0(int);
extern "C" void func_0025C420(S *, int, int, int *, int);
extern "C" int func_0025CF90(S *s) { char raw[0x80]; int *p = (int *)(((int)raw + 0x3F) & -0x40); func_00286EE0(s->h); func_0025C420(s, 0, 0, p, 0x40); return *p; }

