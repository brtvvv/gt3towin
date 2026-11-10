struct E { char p[0x200]; };
extern char D_0032B850[];
extern "C" void func_00232BB8(char *, int); extern "C" void func_0017A630(char *, int);
extern "C" void func_00185010(char *t, int a) { *(void **)(t + 0x54) = D_0032B850; E *b = (E *)(t + 0x58); if (b) { E *e = (E *)(t + 0x458); while (b != e) { e--; func_00232BB8(e->p + 0x18, 2); } } func_0017A630(t, a); }

