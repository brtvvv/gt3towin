struct R { char p[8]; long k; };
struct X { char p[0xE8]; unsigned short v; };
extern char D_002ED3B8[];
extern "C" R *func_00232658(char *, int, long);
extern "C" void func_002327C0(int, int);
extern "C" void func_0023B1E0(long id) { long k; R *r = func_00232658(D_002ED3B8, 0x23, id); if (r) k = r->k; else { r = func_00232658(D_002ED3B8, 0x1F, id); k = r ? r->k : id; } X *x = (X *)func_00232658(D_002ED3B8, 0x1E, k); func_002327C0(((int *)D_002ED3B8)[1], x->v); }
