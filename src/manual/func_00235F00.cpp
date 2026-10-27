struct T { char p[0x10]; unsigned char k; }; extern "C" T *func_00235A28(); extern int D_003546A0[2];
extern "C" int func_00235F00() { T *t = func_00235A28(); if (!t) return 0x55; return D_003546A0[t->k]; }

