extern float D_002E0340[], D_002E0358[], D_002E0328[];
extern "C" int func_0020D460(int m, float x, float y) { float *t = D_002E0340; if (3.0f <= x) t = D_002E0358; if (m) t = D_002E0328; for (int i = 0; i < 5; i++) if (y < t[i]) return i; return 4; }
