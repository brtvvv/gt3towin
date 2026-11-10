struct B { char d[0x40]; };
struct T { char p[0xE340]; B b; char q[0x63A8 - 0x6380]; char *x; };
extern B D_002D3F48; extern char D_0033F260[];
extern "C" void func_001F3938(T *);
extern "C" T *func_001F3670(T *t) { func_001F3938(t); t->x = D_0033F260; t->b = D_002D3F48; return t; }

