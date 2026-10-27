struct T { char p[0x3E]; unsigned short a; }; extern "C" T *func_00235968();
extern char D_002F7008[]; extern "C" float func_00246BB8(void *, float);
extern "C" int func_002365A8() { T *t = func_00235968(); return (int)func_00246BB8(D_002F7008, t->a); }

