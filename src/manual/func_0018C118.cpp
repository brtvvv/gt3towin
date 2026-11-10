struct EB { char p[0x90]; virtual void fx(); virtual void f0(int); };
struct E : EB { char q[0x9C - 0x90 - 4]; };
extern char D_0032E068[], D_0032D038[], D_002C4518[]; extern "C" void func_0022DB58(char *, int); extern "C" void func_0027D2F8(char *);
extern "C" void func_0018C118(char *t, int f) { *(char **)(t + 4) = D_0032E068; func_0022DB58(D_002C4518, *(int *)(t + 0x24)); E *b = (E *)(t + 0x34); if (b) { E *e = b + 3; while (b != e) { e--; e->f0(0); } } *(char **)(t + 4) = D_0032D038; if (f & 1) func_0027D2F8(t); }

