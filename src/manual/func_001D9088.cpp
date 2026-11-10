struct S { char *x0; };
struct N { N *x0; S *x4; };
extern N *D_00354290;
extern "C" int func_0027FC78(const char *, const char *);
extern "C" N *func_001D9088(const char *name) { for (N *n = D_00354290; n; n = n->x0) if (!func_0027FC78(name, n->x4->x0)) return n; return 0; }

