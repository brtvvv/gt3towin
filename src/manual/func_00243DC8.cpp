struct V { virtual void f0(); virtual int f1(); virtual int f2(); virtual int f3(); virtual int f4(); };
struct H { int x0; int x4; short x8, xA; int xC; char p10[0]; char s[1]; };
extern char *D_002F554C[];
extern "C" int func_00243D98(V *); extern "C" void func_0027ED70(void *, int, int); extern "C" void func_0027FDBC(char *, char *);
extern "C" char *func_00243DC8(V *v, H *h) { int n = func_00243D98(v); func_0027ED70(h, 0, n); h->x0 = n; h->x4 = v->f2(); h->x8 = v->f4(); h->xA = v->f3(); func_0027FDBC(h->s + 0, D_002F554C[0]); return (char *)h + h->x0; }

