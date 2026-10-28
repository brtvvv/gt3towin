struct E { char p[0x154]; };
struct R { E e[8]; };
extern "C" int func_00216038(E *);
extern "C" int func_00216650(R *r, int j, int all) { E *e = r[j].e; for (int i = 0; i < (all ? 7 : 8); i++) { if (func_00216038(e) == -1) return 0; e++; } return 1; }
