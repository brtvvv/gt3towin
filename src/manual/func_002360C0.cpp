struct T { char p[0x10]; unsigned char k; }; extern "C" T *func_00235AE0(); extern int D_003546D8[2];
extern "C" int func_002360C0() { T *t = func_00235AE0(); if (!t) return 0x53; return D_003546D8[t->k]; }

