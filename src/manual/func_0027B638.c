/* __pack_f z libgcc (fp-bit.c), wersja z polami bitowymi */
#define FINE_GRAINED_LIBRARIES
#define NO_DENORMALS
#define FLOAT
#define FLOAT_BIT_ORDER_MISMATCH
#define PACK_KEEP_SIGN
#define L_pack_sf
#include "../lib/fp-bit-ee.c"
// @__pack_f 0x27B638

