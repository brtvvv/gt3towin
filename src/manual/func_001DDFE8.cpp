struct S { char p[0x3E9]; signed char m; char q[0x461 - 0x3EA]; char v; }; extern "C" void func_001DDFE8(S *s, int v) { switch (s->m) { case 0: s->v = v; break; case 1: case 2: s->v = 0; break; } }
