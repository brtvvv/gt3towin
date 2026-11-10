extern char D_002CF1D0[];
extern "C" void func_001CE0E8(char *); extern "C" void func_001CC520(char *, int); extern "C" void func_001CD350(char *); extern "C" void func_00252500(int); extern "C" void func_00253908(int, float); extern "C" void func_0025B248(float, float, float, float); extern "C" void func_00256DB0(int, int, int, int); extern "C" void func_001CC720(char *, int);
extern "C" void func_001290A0(char *t, int a) { func_001CE0E8(D_002CF1D0); func_001CC520(t, a); func_001CD350(t + 0x5C); int k = *(int *)(t + 0x58); if (k >= 0) { float f = k; float one = 1.0f; func_00252500(6); func_00253908(0x44, one); float z = 0.0f; func_0025B248(z, z, z, one - f / 25.0f); func_00256DB0(0, 0, 0x282, 0x202); } func_001CC720(t, a); }

