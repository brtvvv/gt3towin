// @flags -fexceptions
struct X { char d[0x35210]; X(); };
extern X *D_0035442C;
extern "C" void func_00219538();
extern "C" void func_00219608() { if (!D_0035442C) { D_0035442C = new X; func_00219538(); } }

