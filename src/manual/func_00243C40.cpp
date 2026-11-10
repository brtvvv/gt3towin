struct N { N *x0; char *x4; };
extern N *D_00354958;
extern "C" int strcmp(const char *, const char *);
extern "C" N *func_00243C40(const char *name) { N *n = D_00354958; while (n && strcmp(n->x4, name)) n = n->x0; return n; }

