extern int D_00304078[]; extern "C" void func_00142F80(char *dst, const char *src) { char c; while ((c = *src++) != 0) { int v = D_00304078[c]; dst[1] = v; dst[0] = v >> 8; dst += 2; } *dst = 0; }
