extern "C" void func_001BE1F8(float *o, unsigned c) { o[0] = (c & 0xFF) / 255.0f; c >>= 8; o[1] = (c & 0xFF) / 255.0f; c >>= 8; o[2] = (c & 0xFF) / 255.0f; c >>= 8; o[3] = (c & 0xFF) / 255.0f; }

