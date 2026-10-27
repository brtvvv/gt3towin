struct T { char p[0x48]; int x; char q[4]; }; extern "C" void func_00270070(T *); extern "C" int func_0022DD30() { T t; func_00270070(&t); return t.x != 0; }
