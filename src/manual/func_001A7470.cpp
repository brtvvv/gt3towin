struct L { int d[64]; };
struct T { char p[0x24]; L l; };
extern "C" T *func_001A7470(T *a, T *b) { a->l = b->l; return a; }

