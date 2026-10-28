struct P { short a, b; char pad[0x1C]; };
extern "C" void func_00268EA8(void *, P *), func_00268D80(void *), func_00268D28(void *);
extern "C" void func_0022CF20(char *s, int on) { if (on) { P p; p.a = 0; p.b = 0; func_00268EA8(s + 4, &p); } func_00268D80(s + 4); func_00268D28(s + 4); }

