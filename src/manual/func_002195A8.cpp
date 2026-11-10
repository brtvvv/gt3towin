extern "C" char *func_00219680();
extern "C" void func_00251E38(int, int);
struct V { char p[0x64]; int x64, x68; };
extern "C" void func_002195A8() { int a = ({ V *_g = (V *)(func_00219680() + 0x2FF38); _g; })->x64; int b = ({ V *_g = (V *)(func_00219680() + 0x2FF38); _g; })->x68; func_00251E38(a * 2, b * 2); }

