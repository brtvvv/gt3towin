struct E { char d[0x38]; };
struct G { char p[0x70]; int x70; };
extern E D_002F6324[];
extern "C" void func_00245BC0(E *); extern "C" void func_00245B38(int); extern "C" void func_00255478(int, int); extern "C" void func_00252790(int); extern "C" void func_00257CA0(float); extern "C" void func_0025B248(float, float, float, float); extern "C" void func_00257140(int, int, int, int, int, int, int, int);
extern "C" void func_001AE1F0(E *e, int k) { G *g = (G *)D_002F6324; func_00245BC0(&D_002F6324[g->x70]); func_00245B38(k); func_00255478(3, 0); func_00255478(2, 0); func_00252790(4); func_00252790(6); func_00252790(5); func_00257CA0(0.0f); func_0025B248(1.0f, 1.0f, 1.0f, 1.0f); func_00257140(0, 0, 0x280, 0x200, 0, 0, 0x280, 0x200); }

