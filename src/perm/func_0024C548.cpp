extern "C" {

typedef struct G G;
struct G
{
  char p[0x80];
  int x80;
  char q[0x98 - 0x84];
  float x98;
  char r[0xAC - 0x9C];
  float xAC;
  float xB0;
  char s[0xBC - 0xB4];
  float xBC;
  float xC0;
};
extern G D_002F8900[];
void func_0024E338(int);
float func_0024C548(unsigned char *p)
{
  G *g = D_002F8900;
  G *new_var;
  float a98 = g->x98;
  float aAC = g->xAC;
  float aB0 = g->xB0;
  float aBC = g->xBC;
  float aC0 = g->xC0;
  int a80 = g->x80;
  g->x80 = -1;
  ((0, g))->xAC = 0;
  g->xB0 = 0;
  g->xBC = 0;
  g->xC0 = 0;
  (*g).x98 = 0;
  int c;
  while (c = *(p++))
  {
    if (c & 0x80)
    {
      c = (c << 8) + (*(p++));
    }
    func_0024E338(c);
  }

  float r = g->xBC;
  if (r < g->x98)
  {
    r = g->x98;
  }
  new_var = g;
  new_var->x80 = a80;
  new_var->xAC = aAC;
  new_var->xB0 = aB0;
  g->xBC = aBC;
  new_var->xC0 = aC0;
 do { g->x98 = a98; } while (0);
  return r;
}
}
