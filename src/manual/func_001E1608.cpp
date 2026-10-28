struct E { char p[0x2C]; int a; int b; float c; char q[0xA4 - 0x38]; };
extern "C" int func_001E1598(char *);
extern "C" void func_001E1608(char *s) {
    if (func_001E1598(s) == 3) return;
    char *q = s + 0xF84;
    E *e = (E *)(s + 0xFE4);
    for (int i = 0; i < 4; i++, e++) { e->a = 0; e->b = 0; e->c = 1.0f; }
    q[0x4E5] = 0; q[0x4E6] = 0; q[0x4E4] = 0;
}

