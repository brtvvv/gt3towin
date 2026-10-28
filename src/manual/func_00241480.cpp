struct G { char p[0x140C]; int sem; };
extern G *D_003548F8;
extern "C" void func_00286EE0(int), func_0026AE48(int);
extern "C" int func_00240648(int, int, int, int, int);
extern "C" int func_00241480(int a, int b, int c, int d, int e) { func_00286EE0(D_003548F8->sem); int r = func_00240648(a, b, c, d, e); func_0026AE48(D_003548F8->sem); return r; }
