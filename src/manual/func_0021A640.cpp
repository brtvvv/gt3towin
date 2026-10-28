struct E { char p[0x50]; };
struct S { char p[0x3C]; int n; };
extern "C" void func_0023D308(char *), func_0023C3F8(E *);
extern "C" void func_0021A640(S *s, E *x) { if (!x) return; func_0023D308((char *)s + 0x1F544); s->n++; E *e = (E *)((char *)s + 0x1B6C4); for (int i = 0; i < 200; i++) { if (e == x) { func_0023C3F8(x); break; } e++; } }
