struct S { char p[0x20]; unsigned char x20, x21; char q[0x49 - 0x22]; char x49[7]; char x50[7]; unsigned char x57, x58, x59, x5A; };
extern "C" int func_0026AD38(); extern "C" void func_0027ED70(char *, int, int);
extern "C" void func_00230328(S *s) { int r = func_0026AD38(); s->x57 = 0; s->x21 = 0; s->x59 = 3; s->x58 = 2; s->x5A = 2; s->x20 = 0xFF; func_0027ED70(s->x50, -1, 7); func_0027ED70(s->x49, 0, 7); if (r) __asm__ volatile("ei"); }

