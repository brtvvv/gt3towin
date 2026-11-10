struct G { int x0, x4, x8; };
extern G *D_003540F0; extern float D_003540DC, D_003540D8, D_003540D4, D_003540D0; extern "C" int func_00245AE0(G *); extern "C" void func_001D2B30(int, int, int, int);
extern "C" void func_001D2DC0(float x, float y) { float w = 640.0f, h = 448.0f; float a = D_003540DC; float o = 0.0f; D_003540D8 = x; D_003540D0 = y; int cx = (int)((a - o) * (D_003540F0->x8 / w)); int px = (int)((x - o) * (func_00245AE0(D_003540F0) / h)); int sw = (int)(D_003540D4 * (D_003540F0->x8 / w)); float hh = D_003540D0; int sh = (int)(hh * (func_00245AE0(D_003540F0) / h)); func_001D2B30(cx - sw / 2, px - sh / 2, sw, sh); }

