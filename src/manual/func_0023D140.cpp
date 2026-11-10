extern char D_00345438[];
struct N { N *x0, *x4; char *x8; };
extern "C" void func_0027D2F8(void *);
extern "C" void func_0023D140(N *n, int fl) { n->x8 = D_00345438; if (n->x0) n->x0->x4 = n->x4; if (n->x4) n->x4->x0 = n->x0; n->x0 = 0; n->x4 = 0; if (fl & 1) func_0027D2F8(n); }

