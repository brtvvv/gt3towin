struct N;
struct NB { char p[0x1C]; virtual void f0(); virtual void f1(); };
struct N : NB { };
struct M { char p[4]; N *x4; N *x8; char q[8]; int x14; };
extern "C" void func_001C0C58(M *);
extern "C" void func_001C0940(void *x, M *u, M *n) { do { M *next = (M *)n->x4; int s = n->x14; if (s == 0) { ((N *)n)->f1(); if (n->x8) func_001C0940(x, n, (M *)n->x8); } else if (s == 1) n->x14 = 2; else if (s == 2) n->x14 = 3; else if (s == 3) func_001C0C58(n); n = next; } while (n); }

