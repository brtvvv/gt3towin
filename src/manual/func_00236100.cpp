struct T { char p[0x10]; unsigned char k; }; extern "C" T *func_00235B10(); extern int D_003546D0[2];
extern "C" int func_00236100() { T *t = func_00235B10(); if (!t) return 0x36; return D_003546D0[t->k]; }

