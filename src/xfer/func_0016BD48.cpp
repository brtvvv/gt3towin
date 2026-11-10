// @flags -fexceptions
typedef unsigned int size_t;
extern "C" int func_0016BDC0(int);
struct X { char d[0x1F4]; X(int a); void *operator new(size_t n); void operator delete(void *p); };
extern "C" void *func_001C02C8(size_t);
extern "C" void func_001C0360(void *);
inline void *X::operator new(size_t n) { return func_001C02C8(n); }
inline void X::operator delete(void *p) { func_001C0360(p); }
extern "C" X *func_0016BD48(int a) {
    if (!func_0016BDC0(a)) return 0;
    return new X(a);
}

