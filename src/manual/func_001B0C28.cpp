struct X { char p[0x64]; unsigned char *x64; };
extern "C" X *func_001C3670(int, int);
extern "C" int func_001B0C28(float *o, int a, int b, int i) { X *x = func_001C3670(a, b); if (!x) return 0; unsigned char *c = x->x64 + i * 4; o[0] = c[0] / 255.0f * 0.5f; o[1] = c[1] / 255.0f * 0.5f; o[2] = c[2] / 255.0f * 0.5f; o[3] = c[3] / 255.0f * 0.5f; return 1; }

