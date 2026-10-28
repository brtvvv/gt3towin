struct C { char p[0x658]; float h; };
extern "C" C *func_001C5450(void);
extern "C" void func_001C5150(C *, int), func_00258FD4(float, float, float), func_0021FF50(int *);
extern "C" float func_001DA490(C *, int, float, float);
extern "C" void func_0013D120(int *s) { float z = 0.0f; func_001C5150(func_001C5450(), *s); float h = func_001C5450()->h; float g = func_001DA490(func_001C5450(), 0, z, z); func_00258FD4(z, h - g, z); func_0021FF50(s + 2); }
