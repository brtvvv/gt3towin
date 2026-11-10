struct T { char p[0x24]; int x24, x28; char q[0x34 - 0x2C]; int x34, x38; };
extern "C" unsigned short **func_002279D0(int); extern "C" void func_00225F98(int); extern "C" void func_00226158(int, int); extern "C" void func_00226068(int); extern "C" void func_002260A8(int);
extern "C" void func_001AA478(T *t) { unsigned short *p; if (t->x38) p = *func_002279D0(t->x38); else p = 0; if (p) { int n = *p; p++; func_00225F98(t->x34); for (int i = 0; i < n; i++) func_00226158(t->x34, p[i]); func_00226068(t->x34); } else func_002260A8(t->x34); }

