struct S { char p[0xC]; int a; float b, c; int e, d; };
extern "C" void func_00175548(S *, int, int);
extern "C" void func_001763C8(S *s, int x, int y) { func_00175548(s, x, y); s->a = y == 0; s->b = 5.0f; s->c = 10.0f; s->e = 0; s->d = 0; }

