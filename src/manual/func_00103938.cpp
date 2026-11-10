struct O { char p[0x1C]; virtual void d(int); };
struct T { char p[0x1C]; char *x1C; char q[0x100 - 0x20]; O *x100[8]; O *x120, *x124; };
extern char D_0030AB88[];
extern "C" void func_001BAB98(T *, int); extern "C" void func_001C0360(T *);
extern "C" void func_00103938(T *t, int fl) { t->x1C = D_0030AB88; if (t->x124) { t->x124->d(3); t->x124 = 0; } if (t->x120) { t->x120->d(3); t->x120 = 0; } for (int i = 0; i < 8; i++) { if (t->x100[i]) { t->x100[i]->d(3); t->x100[i] = 0; } } func_001BAB98(t, 0); if (fl & 1) func_001C0360(t); }

