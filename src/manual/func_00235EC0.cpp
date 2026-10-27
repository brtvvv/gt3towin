struct T { char p[0x10]; unsigned char k; }; extern "C" T *func_002359C8(); extern int D_00354698[2];
extern "C" int func_00235EC0() { T *t = func_002359C8(); if (!t) return 2; return D_00354698[t->k]; }

