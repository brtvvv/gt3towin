struct S { char p[0x40]; short x40; };
struct T { int x0, x4; };
extern char D_003384A0[], D_003384D8[];
extern "C" int func_001C82F8(T *); extern "C" S *func_001C8288(T *, int); extern "C" void func_001D35C0(char *, int, char *, int); extern "C" int func_001C8520(T *, int);
extern "C" int func_001C86D0(T *t) { if (!t->x4) return 0; int k = func_001C82F8(t); S *s = func_001C8288(t, k); if (!s) { func_001D35C0(D_003384A0, k, D_003384D8, 0x151); return 0; } return func_001C8520(t, s->x40); }

