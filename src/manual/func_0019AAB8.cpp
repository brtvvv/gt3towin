struct EB { char p[0x14]; virtual void f0(int); }; struct E : EB { char q[0x88 - 0x18]; };
extern "C" void func_00197418(char *, int);
extern "C" void func_0019AAB8(char *t, int a) { E *b = (E *)(t + 0x3C); if (b) { E *e = b + 8; while (b != e) { e--; e->f0(0); } } func_00197418(t, a); }

