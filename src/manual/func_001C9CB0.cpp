struct N { N *next; };
struct EB { char p[0x100]; };
struct E : EB, N {};
struct LB { N *head; int x4; virtual ~LB(); void remove(N *); };
struct L : LB { virtual ~L() {} };
struct It { N *cur; LB *l; It(LB *x) : cur(x->head), l(x) {} E *next() { N *c = cur; cur = c ? c->next : 0; return static_cast<E *>(c); } };
struct O { char p[0x1C]; virtual ~O(); };
struct B0 { char p[0x1C]; virtual ~B0(); }; struct B : B0 { char q[0xB0 - 0x20]; virtual ~B(); };
struct T : B, L { char r[0x120 - 0xBC]; O *x120, *x124; virtual ~T(); static void operator delete(void *); };
T::~T() { It it(this); E *e; while ((e = it.next())) remove(e); if (x120) { O *o = x120; x120 = 0; delete o; } if (x124) { O *o = x124; x124 = 0; delete o; } }
// @_$_1T 0x1C9CB0

