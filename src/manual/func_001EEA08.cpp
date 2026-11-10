struct S { char p[0x3E4]; float x3E4; char q[0x534 - 0x3E8]; unsigned char x534; };
struct T { int x0; void *x4; char p[0xF84 - 8]; S s; };
extern "C" float func_001F3AD0(void *); extern "C" float func_001F3DF0(void *, int);
extern "C" int func_001EEA08(T *t) { S *s = &t->s; void *o = t->x4; if ((unsigned)(s->x534 - 2) < 3) { float a = func_001F3AD0(o); float v = s->x3E4; if (v < a * 0.5f) v += a; if (v < func_001F3DF0(o, 1)) return 0; if (!(func_001F3DF0(o, -1) < v)) return 1; } return 0; }

