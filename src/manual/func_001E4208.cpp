extern "C" float func_001E4208(float v, float k, float d) { if (v < 0.0f) v = -v; v -= d; if (v < 0.0f) return 1.0f; v *= k; if (v > 1.0f) return 0.0f; return 1.0f - v; }
