struct E { char *name; };
struct L { int x0; E **x4; };
extern "C" int func_0023C808(char *, char *);
extern "C" E *func_0021E1F0(L *l, char *k) { E *r = 0; int n = l->x0; for (int i = 0; i < n; i++) { if (func_0023C808(l->x4[i]->name, k)) { r = l->x4[i]; break; } } return r; }

