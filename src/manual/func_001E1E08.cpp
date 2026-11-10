struct T { char p[0xBC]; float xBC; };
extern "C" float func_001E1D38(T *, short, short);
extern "C" float func_001E1E08(T *t, short a, short b) { float v = func_001E1D38(t, a, b); float m = t->xBC + 1.0f; if (m < v) v = m; return v; }

