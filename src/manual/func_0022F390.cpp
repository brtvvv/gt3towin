struct S { char p[0x38]; int x[32]; }; extern "C" void func_0022F390(S *a, S *b) { int *d = a->x, *s = b->x; int i = 31; while (i != -1) { *d++ = *s++; i--; } }
