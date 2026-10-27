struct T { char p[0x10]; unsigned char k; }; extern "C" T *func_00235BA0(); extern int D_003546B8[2];
extern "C" int func_00236180() { T *t = func_00235BA0(); if (!t) return 0x2C; return D_003546B8[t->k]; }

