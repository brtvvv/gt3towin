extern "C" void *func_0027EBC8(void *, const void *, unsigned int); extern "C" void func_001F5C10(char *, int *);
struct T { char p[8]; char x8[0x48]; char *x50; };
extern "C" void func_001F6450(T *t, int *b) { func_0027EBC8((char *)b + b[0], t->x50, 0x1B00); b[0] += 0x1B00; func_001F5C10(t->x8, b); }

