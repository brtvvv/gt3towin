struct T { char p[0x10]; unsigned char k; }; extern "C" T *func_00235C30(); extern int D_003546A8[2];
extern "C" int func_00236240() { T *t = func_00235C30(); if (!t) return 8; return D_003546A8[t->k]; }

