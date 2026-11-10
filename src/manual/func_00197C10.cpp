struct T { char p[8]; short x8, xA; char q[0x18 - 0xC]; int x18; float x1C; };
extern char D_002F2F98[], D_003539E8[];
extern "C" void func_0023E610(char *, char *); extern "C" void func_0023DE78(char *, float, float); extern "C" void func_0023DF18(char *, float, float); extern "C" int func_0019B910(int); extern "C" void func_0023DFD8(char *, int, int); extern "C" void func_0023E130(char *, unsigned); extern "C" void func_0023E6C0(char *, int);
extern "C" void func_00197C10(T *t) { char *g = D_002F2F98; func_0023E610(g, D_003539E8); float z = 0.0f; func_0023DE78(g, t->x1C, t->x1C); func_0023DF18(g, 3.0f, z); int x = t->x8, y = t->xA; int s = func_0019B910(t->x18); func_0023DFD8(g, x + 4, y + 4); func_0023E130(g, 0x60000000u); func_0023E6C0(g, s); func_0023DFD8(g, x, y); func_0023E130(g, 0x801880D0u); func_0023E6C0(g, s); func_0023DE78(g, 1.0f, 1.0f); func_0023DF18(g, z, z); }

