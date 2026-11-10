struct C { char p[0x658]; float x658; };
extern "C" C *func_001C5450(); extern "C" void func_001C5150(C *, int); extern "C" float func_001DA490(C *, int, float, float); extern "C" void func_00258FD4(float, float, float); extern "C" void func_0021FF50(int *);
extern "C" void func_0013D120(int *t) { float z = 0.0f; func_001C5150(func_001C5450(), t[0]); float h = func_001C5450()->x658; float d = func_001DA490(func_001C5450(), 0, z, z); func_00258FD4(z, h - d, z); func_0021FF50(t + 2); }

