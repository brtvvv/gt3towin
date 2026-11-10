struct G { int x0, x4, x8; };
extern G *D_003540F0; extern "C" int func_00245AE0(G *); extern "C" void func_001D2B30(int, int, int, int);
extern "C" void func_001D2F00(float x, float y, float w2, float h2) { float w = 640.0f, h = 448.0f, o = 0.0f; int cx = (int)((x - o) * (D_003540F0->x8 / w)); int px = (int)((y - o) * (func_00245AE0(D_003540F0) / h)); int sw = (int)(w2 * (D_003540F0->x8 / w)); int sh = (int)(h2 * (func_00245AE0(D_003540F0) / h)); func_001D2B30(cx - sw / 2, px - sh / 2, sw, sh); }

