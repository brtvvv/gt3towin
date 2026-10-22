extern char D_00353048[], D_0031A2E8[], D_0031A2F8[], D_0031A308[];
extern "C" { int func_00129BA8(int, int, int, int); int func_00129E60(int, int, int, int); int func_00129F38(int, int, int, int); int func_0013A0A8(int, int, int, int); }
struct C { const char *name; int (*fn)(int, int, int, int); int a, b, c, d; C(const char *n, int (*f)(int, int, int, int)) : name(n), fn(f), a(0), b(0), c(0), d(0) {} };
C D_0049D7F0[4] = { C(D_00353048, func_00129BA8), C(D_0031A2E8, func_00129E60), C(D_0031A2F8, func_00129F38), C(D_0031A308, func_0013A0A8) };
// @_GLOBAL_$I$D_0049D7F0 0x13B528
