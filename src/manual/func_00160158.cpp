// @flags -fexceptions
struct S5 { char d[5]; };
extern S5 D_003532A8[];
extern "C" char *func_00219680();
extern "C" int func_00232210(char *);
extern "C" int func_00238C20(char *, int);
extern "C" char *func_00236800(int);
extern "C" char *func_00236B70(char *);
extern "C" void func_0027FDBC(char *, const char *);
struct R { char p[0x1D2]; unsigned char x1D2; };
struct X { char p[0x18]; R *x18; char q[0x14]; X(); int m(int); ~X(); };
struct T { char p[0xE50]; char xE50[4]; };
extern "C" void func_00160158(T *t, char *out) {
    if (*(int *)(({ char *_g = func_00219680() + 0x307C8; _g; }) + 0x540)) {
    {
        char *g = ({ char *_g = func_00219680() + 0x307C8; _g; }) + 0x44;
        X x;
        if (x.m(func_00232210(g)) && x.x18->x1D2 == 9) {
            if (func_00238C20(t->xE50, 0x42)) func_0027FDBC(out, func_00236800(0x42));
            else *(S5 *)out = D_003532A8[0];
            return;
        }
    }
    func_0027FDBC(out, func_00236B70(t->xE50));
    } else *(S5 *)out = D_003532A8[0];
}

