struct S { char p[0x50]; void *src; };
extern "C" void *func_0027EBC8(void *, const void *, int);
extern "C" void func_001F5C10(void *, int *);
extern "C" void func_001F6450(S *s, int *buf) { func_0027EBC8((char *)buf + *buf, s->src, 0x1B00); *buf += 0x1B00; func_001F5C10((char *)s + 8, buf); }

