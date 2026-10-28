struct U { char p[0x3F0]; float a, b; };
struct S { char p[0xEC0]; float k; char q[0xC0]; U u; char m[0x32C]; float d; };
extern float D_00351EFC;
extern "C" float func_001DAAC0(char *, float);
extern "C" void func_001EB848(S *s) { U *u = &s->u; float d = s->d; if (d < 0.0f) return; d *= s->k; u->b = func_001DAAC0(s->m, u->b + d); float a = u->a + d; u->a = a; if (D_00351EFC <= a) u->a = a - D_00351EFC; }
