struct S { char p[0xBC]; float m; };
extern "C" float func_001E1D38(S *, short, short);
extern "C" float func_001E1E08(S *s, short a, short b) { float v = func_001E1D38(s, a, b); float m = s->m + 1.0f; if (m < v) v = m; return v; }

