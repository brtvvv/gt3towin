struct L { L(); ~L(); void set(void *); char p[0x30]; };
extern "C" void *func_00232210(void *);
extern "C" void func_0012FC58(void *a) { L l; l.set(func_00232210(a)); }
