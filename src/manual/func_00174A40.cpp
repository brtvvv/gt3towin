extern char D_00327000[], D_00327018[];
extern "C" void func_001BAB98(char *, int); extern "C" void func_001C9CB0(char *, int); extern "C" void func_001C0360(char *);
extern "C" void func_00174A40(char *t, int f) { *(char **)(t + 0xB8) = D_00327000; *(char **)(t + 0x1C) = D_00327018; char *m = t + 0x134; func_001BAB98(t + 0x764, 2); func_001BAB98(t + 0x65C, 2); func_001BAB98(t + 0x554, 2); func_001BAB98(t + 0x44C, 2); func_001BAB98(t + 0x344, 2); func_001BAB98(t + 0x23C, 2); func_001BAB98(m, 2); func_001C9CB0(t, 0); if (f & 1) func_001C0360(t); }

