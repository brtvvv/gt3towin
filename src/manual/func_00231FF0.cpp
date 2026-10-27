struct S { char p[0x64]; signed char n; char d[1]; };
extern "C" void func_00231FF0(S *s) { for (int i = 0; i < s->n; i++) s->d[i] = 0x7F; }

