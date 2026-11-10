struct E { char p[0x2C]; int a, b; float c; char q[0xA4 - 0x38]; };
extern "C" int func_001E1598(char *);
extern "C" void func_001E1608(char *t) { if (func_001E1598(t) == 3) return; char *q = t + 0xF84; E *e = (E *)(t + 0xFE4); for (int i = 3; i >= 0; i--) { e->a = 0; e->b = 0; e->c = 1.0f; e++; } q[0x4E5] = 0; q[0x4E6] = 0; q[0x4E4] = 0; }

