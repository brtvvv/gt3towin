struct V { char d[0x20]; };
extern char D_002D40C0[];
extern "C" void func_001DAA20(V *); extern "C" float func_001D9D60(void *, float); extern "C" float func_001DBC38(char *, V *);
extern "C" float func_001E1AF0(void *t, V *v, float x) { V tmp; func_001DAA20(&tmp); if (!v) v = &tmp; float r = func_001D9D60(t, x); return r * func_001DBC38(D_002D40C0, v); }

