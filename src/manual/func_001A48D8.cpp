struct X0 { char p[0x10]; virtual void d0(); virtual void v1(); }; struct X : X0 { int iC; }; extern "C" void func_001A48D8(char *s, int v) { X *x = (X *)(s + 0x250); ((int *)x)[3] = v; x->v1(); }
