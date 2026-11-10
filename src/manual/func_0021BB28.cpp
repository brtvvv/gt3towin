struct E { int x0; char *x4; char p[0xC]; };
struct L { E *p; unsigned n; };
extern "C" void func_0022C7D0(L *, int); extern "C" long func_00232210(char *);
extern "C" E *func_0021BB28(long *key, int *idx) { L st; func_0022C7D0(&st, 0x14); for (unsigned i = 0; i < st.n; i++) { if (*key == func_00232210(st.p[i].x4)) { if (idx) *idx = i; return &st.p[i]; } } if (idx) *idx = 0; return st.p; }

