struct B { char pad[0x23E0]; float a, b, c, d, e, f, g; };
extern "C" void func_0019CDF0(B *p, float x, float y, float z, float w, float e, float f, float g) {
    p->a = x * 128.0f; p->b = y * 128.0f; p->c = z * 128.0f;
    p->d = w; p->e = e; p->f = f; p->g = g;
}
