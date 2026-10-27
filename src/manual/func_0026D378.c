int func_0026D350(void); float func_0026D378(void) { union { int i; float f; } u; u.i = (func_0026D350() & 0x7FFFFF) | 0x3F800000; return u.f; }
