struct S { char p[0x360]; float f; unsigned char flag; }; extern float D_00351500;
extern "C" void func_0013CED8(S *s) { if (s->flag) { s->f = 1.0f; return; } float v = s->f - D_00351500; s->f = v; if (v < 0) s->f = 0; }

