struct S { char p[0x92]; short h; float x, y, z; }; extern "C" int func_002005B0(S *s, float *x, float *y, float *z) { if (s->h != 1) return 0; *x = s->x; *y = s->y; *z = s->z; return 1; }
