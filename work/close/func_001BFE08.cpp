extern "C" char *func_001BF0A0(int);
extern "C" unsigned func_001DAA70(char *);
extern "C" int func_001BFE08(int *a, int *b) { int bb = *b; char *pb, *pa; pa = func_001BF0A0(*a) + 0x204; pb = func_001BF0A0(bb) + 0x204; unsigned x = func_001DAA70(pa); if (func_001DAA70(pb) < x) return -1; unsigned y = func_001DAA70(pa); return y < func_001DAA70(pb); }
