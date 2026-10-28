struct L { L(); ~L(); char p[0x2A0]; };
extern "C" int func_00143A50(L *, void *);
extern "C" int func_00157188(void *a) { L l; return func_00143A50(&l, a); }
