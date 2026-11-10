struct T { int x0, x4; char x8[0x50]; int x58; };
extern "C" int func_001F5C10(char *, int *); extern "C" void func_001F5F38(T *, int); extern "C" void func_001F6450(T *, int *);
extern "C" int func_001F6360(T *t, int *p) { int off = *p; int k = t->x4; int *d = (int *)((char *)p + off); *p = off + 4; switch (k) { case 0: *d = 0; return func_001F5C10(t->x8, p); case 1: *d = t->x58; for (int i = 0; i < t->x58; i++) { func_001F5F38(t, i); func_001F6450(t, p); } break; case 2: *d = 1; func_001F6450(t, p); break; } }

