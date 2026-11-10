struct O { virtual void f0(); virtual void f1(); };
struct T { int x0; char x4[0x54]; O *x58; int x5C; };
extern "C" void func_001C08E0(char *);
extern "C" void func_0012CEB0(T *t) { if (t->x58 && t->x5C) t->x58->f1(); func_001C08E0(t->x4); }

