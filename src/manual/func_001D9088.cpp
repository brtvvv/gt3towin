struct N { N *next; char **name; };
extern N *D_00354290;
extern "C" int func_0027FC78(const char *, const char *);
extern "C" N *func_001D9088(const char *s) { for (N *n = D_00354290; n; n = n->next) if (!func_0027FC78(s, *n->name)) return n; return 0; }

