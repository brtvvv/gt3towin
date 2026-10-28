extern "C" void func_001E5260(float *p, float t, float s) {
    float v = *p;
    if (v < t) { v = v + s; if (t < v) v = t; }
    else if (t < v) { v = v - s; if (v < t) v = t; }
    *p = v;
}

