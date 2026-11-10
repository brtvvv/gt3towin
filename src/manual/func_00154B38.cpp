struct R { int a, b; };
struct OB { int a, b; virtual int f0(int); };
struct T { char p[0x20]; OB *x20; int x24; };
extern "C" long func_00151C00(T *);
extern "C" long func_00154B38(T *t) { if (t->x24 || !t->x20) return func_00151C00(t); t->x20->f0(3); R r; r.a = 1; r.b = 11; t->x20 = 0; return *(long *)&r; }

