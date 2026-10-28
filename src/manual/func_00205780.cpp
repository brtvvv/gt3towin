struct S { char p[0x80]; float x80; char q[4]; float x88; char r[0x44]; float xD0; char t[8]; int xDC; char u[4]; int xE4; char v[0x18]; float x100, x104, x108, x10C; };
extern float D_0035212C;
extern "C" float func_0026B8F8(float);
extern "C" void func_00205780(S *s) { float one = 1.0f; s->x80 = one; float r = one / func_0026B8F8(D_0035212C); s->xD0 = 100.0f; s->x88 = r; s->x100 = 5.0f; s->x104 = 10.0f; s->x108 = 70.0f; s->xDC = 0; s->xE4 = 0; s->x10C = 20.0f; }
