// @__1T 0x145D38
extern char D_0031CF58[];
extern "C" char *func_00145000(void);
extern "C" void func_0027FDBC(char *, char *), func_0027F9CC(char *, char *);
struct Bs { Bs(); ~Bs(); char p[8]; virtual void w(); };
struct T : Bs { char q[0x28]; char name[0x20]; T(); };
T::T() { func_0027FDBC(name, func_00145000()); func_0027F9CC(name, D_0031CF58); }
