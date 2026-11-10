extern char D_002F5860[];
extern "C" void func_00244BB8(char *, int);
struct T { int x0; char p[0x28]; int x2C; };
extern "C" void func_00245EB8(T *t) { if (t->x2C) func_00244BB8(({ char *_g = D_002F5860; __asm__("" : "+r"(_g)); _g + 0x20; }), t->x0); t->x2C = 0; t->x0 = -1; }

