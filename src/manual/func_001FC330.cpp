struct P { int a, b; };
struct E { char p[0x18]; P a; P b; char q[0x44 - 0x28]; };
extern "C" void func_001FC330(E *e) { for (int i = 0; i < 8; i++) e[i].a = e[i].b; }

