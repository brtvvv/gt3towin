struct E { char p[0x1E8]; int k; char q[4]; };
struct S { char h[0x90]; E e[8]; };
extern "C" void *func_0027EBC8(void *, void *, int);
extern "C" char *func_002379F8(E *, char *);
extern "C" void func_002170B0(S *s, char *p) { E *e = s->e; func_0027EBC8(s, p, 0x8C); p += 0x8C; int *kp = &s->e[0].k; for (int i = 0; i < 8; i++) { p = func_002379F8(e, p); e++; func_0027EBC8(kp, p, 4); kp += sizeof(E) / 4; p += 4; } }
