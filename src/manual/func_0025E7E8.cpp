struct T { int x0; char p[0x3C]; int x40; };
extern T D_004A8EE0;
extern "C" void func_00286EE0(int); extern "C" void func_0025C420(T *, int, int, int, int);
extern "C" void func_0025E7E8(int a) { func_00286EE0(D_004A8EE0.x0); D_004A8EE0.x40 = a; func_0025C420(&D_004A8EE0, 1, 0, 0, 0); }

