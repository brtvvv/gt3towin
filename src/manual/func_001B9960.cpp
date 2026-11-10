struct T { char p[0x624]; int x624; char q[0x668 - 0x628]; char m[0x40]; char s[0x44]; int x6EC; char r[4]; int x6F4; };
extern "C" int func_0023C808(char *, char *); extern "C" char *func_0027FDBC(char *, char *); extern "C" int func_0026AD38(); extern "C" void func_00220688(char *, char *, int); extern "C" void func_00253458(int);
extern "C" void func_001B9960(T *t, char *n) { if (n) { if (func_0023C808(t->s, n)) return; func_0027FDBC(t->s, n); } else { if (!t->s[0]) return; t->s[0] = 0; } int e = func_0026AD38(); if (t->s[0]) func_00220688(t->m, t->s, 1); t->x6F4 = 0; t->x624 = 0; if (e) __asm__ volatile("ei"); if (t->x6EC == 3) { t->x6EC = 2; func_00253458(1); } }

