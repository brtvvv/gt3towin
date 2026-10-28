struct P { int a, b, c, d, e, f; };
extern "C" int func_00286EA0(P *);
extern "C" void func_00271860(void);
extern "C" void func_00286C20(int, void (*)(void), int), func_00286EE0(int), func_00286EB0(int);
extern "C" void func_00271888(unsigned short id) { P p; p.b = 1; p.c = 0; p.f = 0; int s = func_00286EA0(&p); func_00286C20(id, func_00271860, s); func_00286EE0(s); func_00286EB0(s); }

