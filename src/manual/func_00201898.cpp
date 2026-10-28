extern "C" int func_00201898(float *pl, float *v) { for (int i = 0; i < 6; i++, pl += 4) if (0.0f < pl[0] * v[0] + pl[1] * v[1] + pl[2] * v[2] + pl[3]) return 0; return 1; }
