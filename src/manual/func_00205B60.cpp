extern "C" float func_00190930(int);
struct A { char p[0x38]; int x38; };
struct B { char p[0x38]; float x38, x3C; };
struct T { char p[0x184]; int x184; };
extern "C" float func_00205B60(T *t, A *a, B *b) { if (t->x184 < 0) return b->x38; float base = b->x3C; float r = func_00190930(a->x38); return base + (float)t->x184 * r; }

