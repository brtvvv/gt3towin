struct X { char p[0x10]; unsigned char b; };
extern int D_002EDB90[];
extern "C" int func_00235100(void *);
extern "C" X *func_00235D50(void *);
extern "C" int func_002363F8(void *s) { if (!func_00235100(s)) return 0x58; X *x = func_00235D50(s); if (!x) return 0x17; return D_002EDB90[x->b]; }

