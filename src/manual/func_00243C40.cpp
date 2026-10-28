struct N { N *next; char *name; };
extern N *D_00354958;
extern "C" int func_0027FC78(const char *, const char *);
extern "C" N *func_00243C40(const char *s) { N *n; for (n = D_00354958; n; n = n->next) if (!func_0027FC78(n->name, s)) break; return n; }

