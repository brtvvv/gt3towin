struct L { char p[0x40]; int n; int *arr; }; struct S { char p[8]; L *l; }; extern "C" int func_001C3640(S *s) { L *l = s->l; if (!l) return 0; if (l->n > 0) return l->arr[0]; return 0; }
