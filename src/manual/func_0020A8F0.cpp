struct N { int x0, x4, x8; N *xC, *x10; };
struct L { int x0; int p[4]; N *x14, *x18; };
extern "C" int func_0020A828(int, N *);
extern "C" N *func_0020A8F0(int a, L *l, N *n) { int cnt = l->x0; N *p = n; for (int i = 0; i < cnt; i++) { p = p->xC; if (!p && !(p = l->x18)) continue; if (func_0020A828(a, p)) return p; } return n; }

