extern "C" int func_00286D90(); extern "C" void func_00286DA0(int, int *); extern "C" int func_00286D30(int, int); extern "C" void func_0026B1C0(int); extern "C" void func_00286D50(int);
extern "C" void func_0026ADD8() { int st[12]; int p = func_00286D90(); func_00286DA0(p, st); func_00286D30(p, 0x7E); for (int i = 0; i < 100; i++) { func_0026B1C0(10); func_00286D50(0x7E); } func_00286D30(p, st[6]); }

