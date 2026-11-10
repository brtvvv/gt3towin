// @flags -fexceptions
struct X { char d[0xC4]; X(int); };
extern X *D_00354650;
extern "C" void func_002707A8(X *);
extern "C" void func_0022DC58();
extern "C" void func_0026FEF0(void (*)(), int);
extern "C" void func_0022DBD8() { D_00354650 = new X(0x20003); func_002707A8(D_00354650); func_0026FEF0(func_0022DC58, 0); }

