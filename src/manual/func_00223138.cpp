struct EB { char p[0x2C]; virtual void f0(); virtual int g(int); };
struct E : EB { char q[0x4C - 0x30]; };
struct T { char p[0x94]; E e[3]; };
extern int D_00342940[], D_00342950[], D_00342960[], D_00342970[], D_00342980[]; extern float D_00342990[];
extern "C" void func_002237E8(E *, T *, int, int, int, int, int, float);
extern "C" int func_00223138(T *t, int r) { for (int i = 0; i < 3; i++) { func_002237E8(&t->e[i], t, D_00342940[i], D_00342950[i], D_00342960[i], D_00342970[i], D_00342980[i], D_00342990[i]); r = t->e[i].g(r); } return r; }

