extern "C" {

unsigned func_0019FC48(float r, float g, float b, float a)
{
  unsigned int new_var;
  b *= 127.5f;
  a *= 127.5f;
  g *= 127.5f;
  r *= 127.5f;
  new_var = ((int) a) << 24;
  return (((int) r) | new_var) | ((((int) b) << 16) | (((int) g) << 8));
}
}
