struct E { char p[0x8]; int f; char q[0x1B00 - 0xC]; };
struct S { char p[0x1C]; struct { E *b; int x; } e[2]; };
extern "C" void func_001A71B0(S *s) { for (int i = 0; i < 2; i++) { E *e = s->e[i].b; for (int j = 0; j < 40; j++) e[j].f = 0; } }

