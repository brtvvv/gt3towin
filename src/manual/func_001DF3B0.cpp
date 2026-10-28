struct E { char p[0x24]; unsigned char k; char q[0xB]; float a, b; };
extern "C" void func_001DF3B0(char *s, int i, float *pa, float *pb, float x, float y) {
    char *q = s + i * 0xA4;
    E *e = (E *)(q + 0xFE4);
    switch (e->k) { case 6: case 12: case 14: *pa = x * e->a; *pb = y * e->b; }
}

