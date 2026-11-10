struct B { char p[0x10]; B *x10; char q[0x1C - 0x14]; virtual ~B(); };
struct T : B { char r[0x118 - 0x20]; int x118; };
static inline T *cv(B *q) { return q ? dynamic_cast<T *>(q) : 0; }
extern "C" int func_001D8990(T *t) { if (!t->x118) return 0; T *n = cv(t->x10); if (!n) return 1; return func_001D8990(n); }

