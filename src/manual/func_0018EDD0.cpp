struct E { char p[0x1F8]; };
extern char D_0032EFF0[];
extern "C" void func_00232BB8(char *, int); extern "C" void func_00190378(char *, int);
extern "C" void func_0018EDD0(char *t, int a) { *(void **)(t + 0x54) = D_0032EFF0; E *b = (E *)(t + 0x298); if (b) { E *e = b + 8; while (b != e) { e--; func_00232BB8(e->p, 2); } } func_00190378(t, a); }

