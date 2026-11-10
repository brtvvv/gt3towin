struct E { char d[0x154]; };
struct R { E e[8]; };
extern "C" void func_00215F88(E *);
extern "C" void func_00216560(R *r) { for (int i = 0; i < 7; i++) { E *e = r[i].e; for (int j = 7; j >= 0; j--) { func_00215F88(e); e++; } } }

