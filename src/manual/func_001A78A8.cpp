struct E { char p[0x168]; };
extern "C" void func_001A73D8(char *, int); extern "C" void func_0027D2F8(void *);
extern "C" void func_001A78A8(char *t, int a) { E *b = (E *)(t + 0x14); if (b) { E *e = b + 3; while (b != e) { e--; func_001A73D8(e->p + 0x44, 2); } } if (a & 1) func_0027D2F8(t); }

