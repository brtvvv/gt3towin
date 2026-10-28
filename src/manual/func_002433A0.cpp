struct T { T(void *); char p[0x58]; };
extern T *D_00354940;
extern "C" void func_002433A0(void *s) { D_00354940 = new T(s); }

