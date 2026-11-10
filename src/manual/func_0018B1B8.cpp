struct K { int a, b; int operator==(const K &o) const { return a == o.a && b == o.b; } };
struct T { char p[0x94]; K k; };
struct L { char d[0x80]; };
extern "C" void func_0018B070(L *, K *); extern "C" void func_0022AE28(T *, L *, int, int, int);
extern "C" void func_0018B1B8(T *t, K *k, int a, int b, int c) { if (k->a < 0) return; if (t->k == *k) return; L l; func_0018B070(&l, k); func_0022AE28(t, &l, a, b, c); t->k = *k; }

