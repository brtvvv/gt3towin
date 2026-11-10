struct C32 { char c[0x20]; };
struct B { char p[8]; char **x8; };
struct S { char p[0x18]; B *x18; };
extern "C" void func_0012F330(char *t, S *s, int i) { char *d = s->x18->x8[i]; *(C32 *)(d + 0x2104) = *(C32 *)(t + 0x204); }

