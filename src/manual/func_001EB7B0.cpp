extern float D_00351EF8;
struct T { char p[0xEC0]; float xEC0; char q[0x16A8 - 0xEC4]; float x16A8; char r[0x2C]; float x16D8; };
extern "C" void func_001EB7B0(T *t) {
    float a = t->x16A8, b = t->x16D8, d = t->xEC0 * D_00351EF8;
    if (b < a) { float n = b + d; t->x16D8 = n; if (a < n) t->x16D8 = a; }
    else { float n = b - d; t->x16D8 = n; if (n < a) t->x16D8 = a; }
}

