extern "C" float func_001EB288(void *, float, float);
extern "C" void func_001EB318(char *s) {
    char *x = s + 0x1060;
    for (int i = 0; i < 4; i++, x += 0xA4) *(float *)(x - 4) = func_001EB288(x, *(float *)(x - 0x30), *(float *)(x - 0x2C));
}

