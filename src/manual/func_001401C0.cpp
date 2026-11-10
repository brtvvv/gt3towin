struct V { char p[0x10]; short d; short pad; void (*f)(void *); };
struct T { char p[0x288]; V *v; char m2[0x2E4 - 0x28C]; int m; char q[0xE40 - 0x2E8]; int xE40; int xE44; int xE48; char r[0xC]; char s[1]; };
extern char D_00353078[];
extern "C" char *func_00219680(); extern "C" void func_002191D0(char *, char *); extern "C" void func_001B75E8(int *, char *, int); extern "C" int func_001B8170(int *, int); extern "C" unsigned char func_001B8B10(int *); extern "C" void func_0012C3C0(int); extern "C" void func_0012C610(int, int); extern "C" void func_001CCC00(T *, char *);
extern "C" void func_001401C0(T *t) { char *s = t->s; int *m = &t->m; func_002191D0(s, func_00219680() + 0x2FF38); func_001B75E8(m, D_00353078, 0); func_001B8170(m, 0); while (!t->m) { func_001B8B10(m); if (t->xE48) func_0012C3C0(t->xE48); if (t->xE40) { func_0012C3C0(t->xE40); func_0012C610(t->xE40, t->xE48); } func_001CCC00(t, (char *)t + 0x28C); t->v->f((char *)t + t->v->d); } func_002191D0(func_00219680() + 0x2FF38, s); }

