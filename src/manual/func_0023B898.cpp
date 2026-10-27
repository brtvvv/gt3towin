struct R { char p[0x1D2]; unsigned char k; };
extern "C" int func_00232210(); extern "C" R *func_00232658(void *, int, int); extern char D_002ED3B8[];
extern "C" int func_0023B898() { int v = func_00232210(); R *r = func_00232658(D_002ED3B8, 0x20, v); return r->k == 9; }

