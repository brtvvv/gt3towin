struct S { int a; int b; int c; }; extern S D_004A2380; extern "C" void func_0026AE48(int);
extern "C" void func_00230A30() { S *s = &D_004A2380; if (!s->c) { s->c = 1; func_0026AE48(s->b); } }

