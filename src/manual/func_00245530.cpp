extern char D_002F5860[];
extern "C" void func_00244BB8(char *, int); extern "C" void func_0027D2F8(void *);
struct T { int x0; char p[0x28]; int x2C; };
extern "C" void func_00245530(T *t, int fl) { if (t->x2C) func_00244BB8(({ char *_g = D_002F5860; __asm__("" : "+r"(_g)); _g + 0x20; }), t->x0); if (fl & 1) func_0027D2F8(t); }

