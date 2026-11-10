struct O { char p[0x1C]; virtual int d(int); };
struct O2 { char p[0x1C]; virtual void d(int); };
struct T { char p[0x1C]; void *vt; char q[0x124 - 0x20]; int n; O **arr; O2 *a; O2 *b; void *buf; };
extern char D_0030C920[]; extern "C" void *func_001B4820(); extern "C" int func_0026BFC0(void *, void *); extern "C" void func_001BAB98(T *, int); extern "C" void func_001C0360(T *);
extern "C" void func_0010CC38(T *t, int f) { t->vt = D_0030C920; if (t->buf) { func_0026BFC0(func_001B4820(), t->buf); t->buf = 0; }
 if (t->arr) { for (int i = 0; i < t->n; i++) if (t->arr[i]) { t->arr[i]->d(3); t->arr[i] = 0; } func_0026BFC0(func_001B4820(), t->arr); t->arr = 0; }
 if (t->a) { t->a->d(3); t->a = 0; } if (t->b) { t->b->d(3); t->b = 0; } func_001BAB98(t, 0); if (f & 1) func_001C0360(t); }

