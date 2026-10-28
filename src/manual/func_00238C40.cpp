struct X { char p[0xEC]; int v; };
extern "C" X *func_00232658(void *, int, long);
extern "C" int func_00232700(void *);
extern "C" int func_00238C40(long *s) { char *p = (char *)s + 0x1D0; int v = func_00232658(p, 0x1E, s[0])->v; if (func_00232700(p)) v *= 100; return v; }

