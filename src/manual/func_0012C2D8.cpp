struct I { char p[0x10]; int x10, x14; };
struct T { char p[0x108]; int x108; char q[4]; I *x110; char r[4]; int x118; char s[0x1074 - 0x11C]; char x1074[0x1178 - 0x1074]; int x1178; };
extern "C" void func_001BB688(void *); extern "C" int func_0012B760(T *); extern "C" void func_0012BDD0(T *, int); extern "C" int func_0012BD50(T *);
extern "C" void func_0012C2D8(T *t) { func_001BB688(t); if (!t->x110->x10) return; if (func_0012B760(t) && t->x108 == 5) return; if (t->x1178 > 0) { t->x1178--; return; } for (int i = 0; i < t->x118; i++) func_0012BDD0(t, i); if (!func_0012BD50(t)) return; if (!func_0012B760(t)) { int k = t->x110->x14 & 0x1F; if (k != 4 && k != 7 && k != 8) return; } func_001BB688(t->x1074); }

