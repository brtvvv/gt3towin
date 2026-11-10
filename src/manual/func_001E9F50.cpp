struct E { float x0; char p[0x40]; float x44; char q[0x18]; float x60; char r[0xA4 - 0x64]; };
struct T { char p[8]; float x8; char q[0x60 - 0xC]; E e[4]; char r[0x3B4 - 0x60 - 4 * 0xA4]; float o[4]; };
struct U { char p[0x274]; float x274, x278; char q[0x2C4 - 0x27C]; float x2C4; char r[0x308 - 0x2C8]; float x308; };
extern "C" void func_001E9F50(T *t, U *u, float k) { float b[4]; float a = -u->x274 + u->x2C4; float c = -u->x278 + u->x308; b[0] = b[1] = a; b[2] = b[3] = c; float h = t->x8; float *bp = b; float *o = t->o; E *e = t->e; for (int i = 3; i >= 0; i--) { *o++ = (h + e->x44 - e->x0 - e->x60) * k + *bp++; e++; } }

