struct T { T(int); char p[0xC4]; };
extern T *D_00354650;
extern "C" void func_002707A8(T *), func_0026FEF0(void (*)(void), int), func_0022DC58(void);
extern "C" void func_0022DBD8(void) { D_00354650 = new T(0x20003); func_002707A8(D_00354650); func_0026FEF0(func_0022DC58, 0); }
