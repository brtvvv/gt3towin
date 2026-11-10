struct R { char p[0x40]; int x40; char q[8]; int x4C; char r[0x6C - 0x50]; int x6C, x70; char s[0x84 - 0x74]; char x84[0x8BC - 0x84]; unsigned x8BC; };
struct T { R *x0; };
extern "C" void func_0017A100(char *, int, int, int);
extern "C" int func_001F0D60(T *t, int k, unsigned v) { if (k) return 0; R *r = t->x0; if (r->x6C) return 0; if (*((unsigned char *)t + 0xB7AC)) return 0; if (r->x70) return 0; if (v == 0x157529FF) return 0; if (v >= r->x8BC) return 0; r->x4C = 1; if (r->x40) func_0017A100(r->x84, 0x13, 0, 0); return 1; }

