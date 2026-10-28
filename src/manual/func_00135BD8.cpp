struct Y { char p[0x2C]; int k; };
struct O { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();  virtual Y *g(); };
struct X { char p[0x30]; long id; char q[4]; O *o; };
extern long D_00352F18[];
extern char D_002F49E0[];
extern "C" X *func_00136900(void);
extern "C" char *func_0023B270(long);
extern "C" void func_0027F9CC(char *, char *), func_00172368(void *);
extern "C" void *func_002428C8(char *, int, int, int, char *);
extern "C" void func_00135BD8(void) { X *x = func_00136900(); Y *y = x->o->g(); long buf[0x20]; buf[0] = D_00352F18[0]; func_0027F9CC((char *)buf, func_0023B270(x->id)); func_00172368(func_002428C8((char *)buf, y->k, 0x20000, 1, D_002F49E0)); }
