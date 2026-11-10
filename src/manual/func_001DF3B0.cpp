struct E { char p[0x24]; unsigned char x24; char q[0xB]; float x30, x34; };
extern "C" void func_001DF3B0(char *t, int i, float x, float y, float *ox, float *oy) {
    E *e = (E *)(t + i * 0xA4 + 0xFE4);
    switch (e->x24) { case 6: case 12: case 14: *ox = x * e->x30; *oy = y * e->x34; }
}

