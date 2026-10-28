struct C { char p[0x140]; int f; };
struct X { char p[0xC]; C *c; char q[0x1358]; float v; };
extern "C" X *func_001F3A90(void *);
extern "C" void func_001F2328(C *, X *, int, float), func_001E1870(X *, int, int, float, float, float);
extern "C" void func_001E1A80(void *a) { X *x = func_001F3A90(a); if (x->c->f) return; func_001F2328(x->c, x, 1, 1.0f); func_001E1870(x, 0, 0, 1.0f, 0.0f, x->v); }
