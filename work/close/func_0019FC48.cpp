extern "C" unsigned func_0019FC48(float r, float g, float b, float a) {
    a = a * 127.5f; b = b * 127.5f; g = g * 127.5f; r = r * 127.5f;
    int A = (int)a; int Bv = (int)b; int G = (int)g; int R = (int)r;
    return (R | A << 24) | (Bv << 16 | G << 8);
}
