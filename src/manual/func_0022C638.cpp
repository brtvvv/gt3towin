extern float D_00354504, D_00354510; extern int D_003544FC, D_00354508, D_0035450C;
extern "C" void func_0022C6F8(); extern "C" int func_0022C608(int); extern "C" void func_0022C4E0(int, int, float, int); extern "C" void func_0022BD18(int, int, float, int);
extern "C" void func_0022C638(int a, int b, int c, float f) { float g = f * D_00354504; func_0022C6F8(); int k = func_0022C608(a); switch (k) { case 0: D_003544FC = 2; func_0022C4E0(a, b, g, c); break; case 1: D_003544FC = k; func_0022BD18(a - 0x12, b, g, c); break; } D_00354508 = a; D_0035450C = b; D_00354510 = f; }

