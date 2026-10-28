struct S { char p[8]; float x8; char q[0x74]; int x80; };
extern char D_00342610[];
extern "C" int func_00220890(S *);
extern "C" void func_00256088(void), func_00259198(void), func_0025920C(float *, char *), func_00256108(void);
extern "C" int func_002209C0(S *s) { float v[4]; if (!func_00220890(s)) return 0; func_00256088(); func_00259198(); func_0025920C(v, D_00342610); func_00256108(); s->x80 = (-(s->x8 * 0.5f) - v[0]) > 0.0f; return 1; }
