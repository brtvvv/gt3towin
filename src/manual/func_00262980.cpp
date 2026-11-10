extern "C" void func_00262798(); extern "C" int func_002652E8(int); extern "C" void func_002653B8(int); extern "C" unsigned func_002652A8(int); extern "C" void func_00262A88(); extern "C" void func_00262B40(); extern "C" void func_00262B98();
extern "C" void func_00262980() { int c; func_00262798(); while ((c = func_002652E8(0x20)) == 0x1B5 || c == 0x1B2) { func_002653B8(0x20); if (c != 0x1B5) func_00262798(); else { switch (func_002652A8(4)) { case 1: func_00262A88(); break; case 2: func_00262B40(); break; case 8: func_00262B98(); break; } func_00262798(); } } }

