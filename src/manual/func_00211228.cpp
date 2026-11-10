struct T { char p[0xC]; float x[6]; };
extern char D_00341008[];
extern "C" int func_0027C1D8(float); extern "C" void func_0026D8C8(char *, ...);
extern "C" void func_00211228(T *t) { func_0026D8C8(D_00341008, func_0027C1D8(t->x[0]), func_0027C1D8(t->x[1]), func_0027C1D8(t->x[2]), func_0027C1D8(t->x[3]), func_0027C1D8(t->x[4]), func_0027C1D8(t->x[5])); }

