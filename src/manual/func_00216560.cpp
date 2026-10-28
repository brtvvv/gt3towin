struct E { char p[0x154]; };
struct R { E e[8]; };
extern "C" void func_00215F88(E *);
extern "C" void func_00216560(R *r) { for (int j = 0; j < 7; j++) for (int i = 0; i < 8; i++) func_00215F88(&r[j].e[i]); }
