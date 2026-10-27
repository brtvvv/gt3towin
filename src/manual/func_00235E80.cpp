struct T { char p[0x10]; unsigned char k; }; extern "C" T *func_00235B40(); extern int D_00354690[2];
extern "C" int func_00235E80() { T *t = func_00235B40(); if (!t) return 0; return D_00354690[t->k]; }

