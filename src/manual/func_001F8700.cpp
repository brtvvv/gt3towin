struct G { char p[0xEC0]; float xEC0; };
struct T { int x0; G *x4; char p[0x64]; float x6C; char q[0x2C]; float x9C; };
extern "C" void func_001F8700(T *t, float a) {
    float b = t->x9C, d = t->x6C * t->x4->xEC0;
    if (b < a) { float n = b + d; t->x9C = n; if (a < n) t->x9C = a; }
    else if (a < b) { float n = b - d; t->x9C = n; if (n < a) t->x9C = a; }
}

