struct T { char p[0xC4]; char m[0x2B4 - 0xC4]; int x2B4; char q[4]; int x2BC; char r[8]; int x2C8; char s[0x624 - 0x2CC]; int x624; char x628; char t[0x6A8 - 0x629]; char x6A8; char u[0x6EC - 0x6A9]; int x6EC, x6F0, x6F4; char v[0x708 - 0x6F8]; int x708, x70C; char w[0x71C - 0x710]; int x71C; };
extern int D_00353EF8[2];
extern "C" int func_0026AD38(); extern "C" int func_001C5230(int); extern "C" void func_0021FA18(int, char *, int); extern "C" void func_00210860(char *);
extern "C" void func_001B98A0(T *t, int k) { if (t->x2BC == k) return; int e = func_0026AD38(); t->x6F0 = 0; t->x6F4 = 0; t->x2BC = k; if (k) { int r = func_001C5230(t->x2B4); if (!r) { t->x628 = 0; t->x2BC = 0; } else { func_0021FA18(r, &t->x628, 2); t->x2C8 = 0; t->x624 = 0; } } t->x708 = 0; t->x70C = 0; func_00210860(t->m); t->x6A8 = 0; t->x6EC = 0; D_00353EF8[t->x71C] = 0; if (e) __asm__ volatile("ei"); }

