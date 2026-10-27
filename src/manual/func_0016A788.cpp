struct S { char p[0x2D1]; char b; }; extern "C" int func_0016A7B8(S *, int); extern "C" void func_0016A788(S *s, int v) { s->b = v; func_0016A7B8(s, (char)v != 0); }
