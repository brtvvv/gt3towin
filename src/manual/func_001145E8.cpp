struct S { char p[0x3A2C]; unsigned m; };
extern "C" int func_001145E8(S *s) {
    int r = 0;
    switch (s->m) {
    case 1: r = 1; break;
    case 2: r = 2; break;
    case 3: r = 3; break;
    case 4: r = 4; break;
    case 5: r = 5; break;
    case 0: case 6: case 7: break;
    }
    return r;
}

