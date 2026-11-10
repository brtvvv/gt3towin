struct G { unsigned char x0, x1, x2, x3, x4, x5, x6; };
extern G D_002D3E70[]; extern float D_00351AF0, D_003542B8, D_003542BC, D_003542C0, D_003542C4, D_003542C8;
extern "C" void func_001DBF30() { D_003542B8 = D_002D3E70[0].x0 * D_00351AF0; if (D_002D3E70[0].x0) { D_003542BC = (float)D_002D3E70[0].x1 / D_002D3E70[0].x0; D_003542C0 = (float)D_002D3E70[0].x2 / D_002D3E70[0].x0; } else { D_003542BC = 0; D_003542C0 = 0; } if (D_002D3E70[0].x5) D_003542C4 = 10.0f / D_002D3E70[0].x5; else D_003542C4 = 1.0f; if (D_002D3E70[0].x6) D_003542C8 = 10.0f / D_002D3E70[0].x6; else D_003542C8 = 0.25f; }

