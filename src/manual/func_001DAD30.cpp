struct S { float a, b, c; }; extern char D_002D40C0[]; extern "C" float func_001DBC00(void *);
extern "C" int func_001DAD30(S *s) { return func_001DBC00(D_002D40C0) <= s->c; }

