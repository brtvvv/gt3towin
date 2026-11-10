struct T { char p[0xC4]; void **xC4; int xC8; };
extern "C" void func_001BC578(void *, int);
extern "C" void func_001C1368(T *t, int b) { for (int i = 0; i < t->xC8; i++) if (t->xC4[i]) func_001BC578(t->xC4[i], b); }

