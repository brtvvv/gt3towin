struct G { int x0, x4, x8; };
extern G *D_003540F0; extern "C" int func_00245AE0(G *); extern "C" void func_001D2B30(int, int, int, int);
extern "C" void func_001D3170(float x, float y) { float w = 640.0f, h = 448.0f; int cx = (int)(D_003540F0->x8 / w * 320.0f); int px = (int)((x - 0.0f) * (func_00245AE0(D_003540F0) / h)); int sw = (int)(D_003540F0->x8 / w * w); int sh = (int)(y * (func_00245AE0(D_003540F0) / h)); func_001D2B30(cx - sw / 2, px - sh / 2, sw, sh); }

