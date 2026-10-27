struct S { char p[0x48]; int arr[1]; }; extern "C" int func_0021AD80(S *s, int k) { if (!k) return 1; return s->arr[k - 1]; }
