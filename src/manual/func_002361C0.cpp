struct T { char p[0x10]; unsigned char k; }; extern "C" T *func_00235BD0(); extern int D_003546B0[2];
extern "C" int func_002361C0() { T *t = func_00235BD0(); if (!t) return 0xD; return D_003546B0[t->k]; }

