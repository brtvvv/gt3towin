struct X { char p[0x588]; int k; };
struct W { char p[0x307C8]; X x; };
extern char D_00352B38[];
extern "C" W *func_00219680(void);
extern "C" void *func_001C5450(void);
extern "C" char *func_001C5358(void *, int);
extern "C" void func_0027FDBC(char *, char *);
extern "C" void func_0011EB98(int u, char *buf) { X *x = &func_00219680()->x; int k = x->k; char *s = func_001C5358(func_001C5450(), k); if (*s == '-') __builtin_memcpy(buf, D_00352B38, 2); else func_0027FDBC(buf, s); }
