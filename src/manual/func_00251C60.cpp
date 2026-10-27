struct S { char p[0x60]; long mode; char q[0x99 - 0x68]; char a, b, c; }; extern S D_004A8380;
extern "C" void func_00251C60(int a, int b, int c) { S *s = &D_004A8380; s->b = b; s->a = a; s->c = c; if (a == 1) { if (c == a) s->mode = 3; else s->mode = 1; } else s->mode = 2; }

