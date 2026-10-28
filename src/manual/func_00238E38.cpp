struct S { char p[0x10]; unsigned short h; };
extern "C" int func_00232E30(S *);
extern "C" void func_00238E98(S *), func_00238A88(S *, int);
extern "C" int func_00238E38(S *s) { if (!func_00232E30(s)) return 0; func_00238E98(s); if (s->h != 2) return 1; func_00238A88(s, 0x42); func_00238A88(s, 0x4D); return 1; }

