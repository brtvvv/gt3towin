extern "C" int func_001ECEA8(float a, float b, float c, float d, float e, float f) { int k; if (a > 50.0f) return 0;
 if (b > d * 4.0f) k = 6; else if (b > d) k = 5; else if (b > 0.0f) k = 4; else if (b >= -e) k = 3; else if (!(b >= -e * 4.0f)) k = 1; else k = 2;
 float n = -f; if (c < n * 4.0f) return k | 0x10; if (c < n) return k | 0x20; if (c < n * 0.5f) return k | 0x30; if (c <= f * 0.5f) return k | 0x40; if (c <= f) return k | 0x50; if (c <= f * 4.0f) return k | 0x60; return k | 0x70; }

