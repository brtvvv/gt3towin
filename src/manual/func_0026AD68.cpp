extern "C" int func_00286EA0(int *); extern "C" void func_0026ADD8();
extern "C" int func_0026AD68(int a) { int st[8]; st[1] = 1; st[2] = a; st[5] = 0; int r; while ((r = func_00286EA0(st)) == -1) func_0026ADD8(); if (!r) r = func_0026AD68(a); return r; }

