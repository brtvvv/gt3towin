struct X { char p[0x538]; char *q; };
struct W { char p[0x307C8]; X x; };
extern char D_00352AD8[];
extern "C" W *func_00219680(void);
extern "C" int func_00235400(char *), func_00238C40(char *);
extern "C" void func_0023C8E8(char *, int);
extern "C" void func_0011CD80(int u, char *buf) { X *x = &func_00219680()->x; char *o = x->q + 0x10; if (func_00235400(o) & 1) __builtin_memcpy(buf, D_00352AD8, 5); else func_0023C8E8(buf, func_00238C40(o)); }
