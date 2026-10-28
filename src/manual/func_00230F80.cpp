struct __attribute__((packed)) B { unsigned char k; char r[0x27]; };
struct S { char p[0xC]; B b; };
extern "C" void func_00230C30(S *, int);
extern "C" char *func_00230F80(S *s, char *src) { s->b = *(B *)src; func_00230C30(s, s->b.k); return src + 0x28; }
