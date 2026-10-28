struct B { char p[8]; virtual ~B(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual int g(); };
struct D : B { char q[0x230 - 0xC]; char data[4]; };
extern "C" B *func_0014ADA8(int);
extern "C" char *func_0014CA58(int a, char *out) {
    B *b = func_0014ADA8(a);
    D *d = dynamic_cast<D *>(b);
    if (d && b->g()) return d->data;
    *out = 0;
    return 0;
}
