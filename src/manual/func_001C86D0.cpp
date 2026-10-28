struct E { char p[0x40]; short k; };
struct S { int a; int b; };
extern char D_003384A0[], D_003384D8[];
extern "C" int func_001C82F8(S *), func_001C8520(S *, int);
extern "C" E *func_001C8288(S *, int);
extern "C" void func_001D35C0(char *, int, char *, int);
extern "C" int func_001C86D0(S *s) { if (!s->b) return 0; int k = func_001C82F8(s); E *e = func_001C8288(s, k); if (!e) { func_001D35C0(D_003384A0, k, D_003384D8, 0x151); return 0; } return func_001C8520(s, e->k); }
