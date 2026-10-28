struct E { char p[0x44]; char s[0x124]; };
struct T { char p[0x14]; E e[3]; };
extern "C" void func_001A73D8(char *, int), func_0027D2F8(T *);
extern "C" void func_001A78A8(T *t, int c) { E *b = t->e; if (b) { E *p = b + 3; if (b != p) { do { p--; func_001A73D8(p->s, 2); } while (b != p); } } if (c & 1) func_0027D2F8(t); }
