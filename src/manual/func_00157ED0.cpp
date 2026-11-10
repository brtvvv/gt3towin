// @flags -fexceptions
typedef unsigned int size_t;
struct T2 { char p[0xE30]; int xE30; };
struct X { char d[0x3C]; X(T2 *, int, int, int, int); void *operator new(size_t); void operator delete(void *); };
extern "C" void func_00157888(X **, T2 *, int);
extern "C" void func_00157ED0(X **out, T2 *a, int k) {
    if (k < 0) *out = new X(a, 0x140, 0xE0, 0, 0);
    else func_00157888(out, a, 0);
    if (!*out) a->xE30 = 1;
}

