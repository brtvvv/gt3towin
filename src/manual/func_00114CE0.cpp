extern "C" void func_001CD840(char *, int, int); extern "C" int func_00113958(char *, int); extern "C" int func_0010EE00(char *, int); extern "C" int func_001091F0(char *, int); extern "C" int func_0010C7A0(char *, int);
extern "C" int func_00114CE0(char *t) { int st = 2, r = 1, done = 0; func_001CD840(t + 0x38DC, 0, 6);
 do { switch (st) { case 2: r = func_00113958(t, r); if (r) st = 6; else done = 1; break; case 6: r = func_0010EE00(t, r); st = 7; if (!r) st = 2; break; case 7: r = func_001091F0(t, r); st = 5; if (!r) st = 6; break; case 5: r = func_0010C7A0(t, r); if (!r) st = 7; else done = 1; break; } } while (!done); return r; }

