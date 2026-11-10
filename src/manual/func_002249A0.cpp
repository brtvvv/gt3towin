struct E { int x0, x4, x8, xC; };
struct G { char p[0x20]; E *x20; };
struct S { char p[0x178]; int x178; };
struct T { char p[0x30]; int x30; int x34; S *x38; };
extern G *D_00354464;
extern "C" void func_002210A0(T *); extern "C" void func_00222470(int, int); extern "C" void func_002224C0(int, int); extern "C" void func_00224CF0(T *, int);
extern "C" void func_002249A0(T *t, int b) { S *s = t->x38; func_002210A0(t); if (t->x30 && (D_00354464->x20[s->x178].x0 & 1)) { func_00222470(b, 0xC); func_002224C0(b, 0x5C); func_00224CF0(t, b); } }

