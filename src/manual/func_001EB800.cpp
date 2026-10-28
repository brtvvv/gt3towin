struct E { char c[32]; };
struct S { char p[0x1378]; int x; E e; };
extern "C" void func_001EB800(S *s, E *e) { s->e = *e; s->x = 0; }

