struct R { float x, y, z; int k; float r; char p[0x1C]; unsigned char hit; char q[0xF]; float v[3]; char t[4]; };
extern "C" void func_001909A0(void *, R *);
extern "C" float func_001F9E10(void *o, int *k, int *hit, float x, float y, float z) { R r; r.v[0] = x; r.v[1] = y; r.v[2] = z; r.x = x; r.y = z; r.z = -y; r.k = *k; func_001909A0(o, &r); int h = r.hit; *hit = h; if (!h) { *k = r.k; return r.r; } return 0.0f; }
