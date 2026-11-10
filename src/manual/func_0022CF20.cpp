struct T { int x0; char x4[4]; };
extern "C" void func_00268EA8(char *, short *); extern "C" void func_00268D80(char *); extern "C" void func_00268D28(char *);
extern "C" void func_0022CF20(T *t, int on) { if (on) { struct { short a, b; char p[0x1C]; } s; s.a = 0; s.b = 0; func_00268EA8(t->x4, &s.a); } func_00268D80(t->x4); func_00268D28(t->x4); }

