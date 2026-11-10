struct V { float x, y, z; };
struct B { float x, y, z; char p[0x34 - 12]; };
struct C { float y; char p[0xA4 - 4]; };
struct T { char p[0xEC4]; float xEC4; char q[0xFE8 - 0xEC8]; C c[4]; char r[0x14BC - 0xFE8 - 4 * 0xA4]; B b[4]; char s[0x1654 - 0x14BC - 4 * 0x34]; V a[4]; };
extern "C" void func_001EC850(T *t, V *o, int i, float k) { k += t->xEC4; float j = 1.0f - k; o->x = t->a[i].x * k + t->b[i].x * j; o->y = t->a[i].y * k + t->c[i].y * j; o->z = t->a[i].z * k + t->b[i].z * j; }

