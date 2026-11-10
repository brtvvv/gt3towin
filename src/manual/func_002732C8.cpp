struct S { char p[0x58]; int x58; char q[0xD8 - 0x5C]; int xD8; };
struct E { S *x0; char q[0x18]; }; struct A { E e[4]; }; extern A D_004AD290[];
extern "C" void func_002876F0(S *, char *);
extern "C" char *func_002732C8(int a, int b) { S *s = D_004AD290[a].e[b].x0; func_002876F0(s, (char *)s + 0x100); int k = s->x58 < s->xD8; return (char *)s + k * 128; }

