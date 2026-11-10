extern "C" int func_00114640(int); extern "C" int func_0010A040(int, int);
extern "C" int func_001089F8(int a, unsigned k, int b) { switch (k) { case 0: case 1: case 2: case 3: return func_00114640(a); case 4: return func_00114640(a) ^ 1; case 5: case 6: return func_0010A040(a, b) < 1; case 7: case 8: return 0; } return 0; }

