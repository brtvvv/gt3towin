struct X { char p[0x22C]; int v; };
extern "C" X *func_001BF0A0(int);
extern "C" int func_001BFAE0(int *a, int *b) { int y = *b; X *p = func_001BF0A0(*a); X *q = func_001BF0A0(y); int pv = p->v, qv = q->v; if (qv < pv) return -1; return pv < qv; }

