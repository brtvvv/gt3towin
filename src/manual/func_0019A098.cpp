struct S { char p[0x1C]; float a; float b; int c; }; extern "C" void func_0019A098(S *s) { if (s->a < s->b) s->a += 0.02f; if (s->b >= 0.0f && s->c > 0) s->c--; }
