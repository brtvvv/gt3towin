struct S { int a; char *buf; int b; int len; };
extern "C" void func_0026F608(char *);
extern "C" void func_0026D7E0(S *s) { if (s->len) { s->buf[s->len] = 0; func_0026F608(s->buf); s->len = 0; } }

