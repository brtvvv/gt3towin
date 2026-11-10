extern "C" char *func_00219680();
extern "C" int func_00236040(char *);
struct V { char p[0x540]; int x540; };
extern "C" int func_00161948(char *t) { if (!({ V *_g = (V *)(func_00219680() + 0x307C8); _g; })->x540) return 1; return func_00236040(t + 0xE50) != 0x23; }

