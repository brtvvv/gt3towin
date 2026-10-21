struct E { float x, y; int z; }; extern "C" void func_001D26B8(int self, E *arr, int i, float x, float y) { E *e = &arr[i]; e->x = x; e->y = y; e->z = 0; }
