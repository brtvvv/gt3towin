struct E { char d[0xF0]; };
struct T { char p[0x1BC]; char a[0x204 - 0x1BC]; char b[0x240 - 0x204]; E e[1]; char q[0x900 - 0x240 - 0xF0]; int x900; float x904; int x908; int x90C; float x910; };
extern "C" void func_001B21D8(void *, float);
extern "C" void func_001B2FE0(T *t, float x) { if (!t->x90C) return; func_001B21D8(t->a, x); int i = 0; func_001B21D8(t->b, x); if (i < t->x900) { E *e = t->e; do { func_001B21D8(e, x); i++; e++; } while (i < t->x900); } t->x910 = t->x904 + x; }

