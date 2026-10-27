struct S { char p[0x3C]; int v; }; extern S D_004A84C0; extern int D_00354A80;
extern "C" void func_00286EE0(int); extern "C" void func_0026AE48(int);
extern "C" int func_0025C8D8() { S *s = &D_004A84C0; func_00286EE0(D_00354A80); int v = s->v; func_0026AE48(D_00354A80); return v; }

