struct O { char p[0x18]; float v; }; extern "C" int func_001C0B50(O **a, O **b) { float x = (*a)->v, y = (*b)->v; if (x < y) return -1; if (y < x) return 1; return 0; }
