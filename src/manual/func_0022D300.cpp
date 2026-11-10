struct T { char d[0x30]; };
extern "C" void func_002694B0(T *);
extern "C" T *func_0022D300(T *t, T *o) { func_002694B0(t); *t = *o; t->d[0x10] = -1; t->d[0x20] = -1; return t; }

