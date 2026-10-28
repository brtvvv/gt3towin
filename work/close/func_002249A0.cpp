struct E { unsigned f; int p[3]; };
struct G { char p[0x20]; E *tab; };
struct T { char p[0x178]; int k; };
struct S { char p[0x30]; int on; char q[4]; T *t; };
extern G *D_00354464;
extern "C" void func_002210A0(S *, int), func_00222470(int, int), func_002224C0(int, int), func_00224CF0(S *, int);
extern "C" void func_002249A0(S *s, int a) { T *t = s->t; func_002210A0(s, a); if (s->on && (D_00354464->tab[t->k].f & 1)) { func_00222470(a, 0xC); func_002224C0(a, 0x5C); } func_00224CF0(s, a); }
