struct E { char p[0x10]; int x10; char q[8]; };
struct R { E e[4]; };
struct S { char p[0x64]; unsigned char x64, x65, x66; char q[0x72 - 0x67]; unsigned char x72; char r[0x79 - 0x73]; unsigned char x79, x7A, x7B, x7C; };
extern R D_004AD290[]; extern "C" S *func_002732C8(int, int);
extern "C" int func_00273B58(int a, int b) { if (!D_004AD290[a].e[b].x10) return 0; S *s = func_002732C8(a, b); if (s->x72 != 1) return 0; if (s->x64 < 2) return 0; if (s->x66 < 2) return 0;
 return (int)(((long)s->x79 + ((long)s->x7B << 16)) + (((long)s->x7C << 24) + ((long)s->x7A << 8))); }

