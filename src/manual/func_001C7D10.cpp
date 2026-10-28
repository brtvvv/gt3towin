struct S { char p[0x100]; void (*fn)(int, char *, int); int h; char b[0x80]; int f; };
extern "C" void func_001BAE10(S *, char *), func_001BB688(S *);
extern "C" void func_001C7D10(S *s) { if (!s->f) s->fn(s->h, s->b, 0x80); func_001BAE10(s, s->b); func_001BB688(s); }

