// @flags -fexceptions
extern char D_003524D8[];
extern int D_002F587C[];
struct X { char d[0x4030]; X(); void m(int); ~X(); };
extern "C" int func_0027FC78(const char *, const char *);
extern "C" int func_00102F38();
extern "C" void func_00102E80(int argc, char **argv) {
    int f = 0;
    if (argc >= 2) f = !func_0027FC78(argv[1], D_003524D8);
    X t;
    t.m(f);
    if (func_00102F38()) D_002F587C[0] = 1;
}

