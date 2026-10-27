struct T { char p[0x3A]; unsigned short a; }; extern "C" T *func_00235968();
extern char D_002F7008[]; extern "C" float func_00246B60(void *, float);
extern "C" int func_00236538() { T *t = func_00235968(); return (int)func_00246B60(D_002F7008, t->a); }

