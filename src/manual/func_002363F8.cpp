extern int D_002EDB90[];
struct R { char p[0x10]; unsigned char x10; };
extern "C" int func_00235100(void *); extern "C" R *func_00235D50(void *);
extern "C" int func_002363F8(void *t) { if (!func_00235100(t)) return 0x58; R *r = func_00235D50(t); if (!r) return 0x17; return D_002EDB90[r->x10]; }

