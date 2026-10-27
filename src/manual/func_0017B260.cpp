struct T { char p[0x20E0]; int idx; }; struct L { unsigned n; int pad; T **arr; }; struct S { char p[0x18]; L *l; };
extern "C" void func_0017B260(S *s) { L *l = s->l; for (unsigned i = 0; i < l->n; i++) l->arr[i]->idx = i; }

