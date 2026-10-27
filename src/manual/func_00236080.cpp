struct T { char p[0x10]; unsigned char k; }; extern "C" T *func_00235A58(); extern int D_003546C8[2];
extern "C" int func_00236080() { T *t = func_00235A58(); if (!t) return 0x58; return D_003546C8[t->k]; }

