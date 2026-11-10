typedef struct { unsigned length; int CIE_delta; void *pc_begin; unsigned pc_range; } fde;
typedef struct { fde **array; unsigned count; } fde_vector;
typedef struct { fde_vector linear; fde_vector erratic; } fde_accumulator;
void func_0027E9D8(void) __attribute__((noreturn)); void func_0027D0D0(fde_vector *, fde_vector *); void func_0027C2B0(fde_vector *, fde_vector *); void func_0026D5B8(void *);
static inline int fde_compare(fde *x, fde *y) { return (int)x->pc_begin - (int)y->pc_begin; }
#define SWAP(x,y) do { fde * tmp = x; x = y; y = tmp; } while (0)
static inline void frame_heapsort(fde_vector *erratic) { fde **a = erratic->array; unsigned n = erratic->count; unsigned m = n; unsigned i;
 while (m > 0) { m--; for (i = m; 2*i+1 < n; ) { if (2*i+2 < n && fde_compare(a[2*i+2], a[2*i+1]) > 0 && fde_compare(a[2*i+2], a[i]) > 0) { SWAP(a[i], a[2*i+2]); i = 2*i+2; } else if (fde_compare(a[2*i+1], a[i]) > 0) { SWAP(a[i], a[2*i+1]); i = 2*i+1; } else break; } }
 while (n > 1) { n--; SWAP(a[0], a[n]); for (i = 0; 2*i+1 < n; ) { if (2*i+2 < n && fde_compare(a[2*i+2], a[2*i+1]) > 0 && fde_compare(a[2*i+2], a[i]) > 0) { SWAP(a[i], a[2*i+2]); i = 2*i+2; } else if (fde_compare(a[2*i+1], a[i]) > 0) { SWAP(a[i], a[2*i+1]); i = 2*i+1; } else break; } } }
fde **func_0027C3B0(fde_accumulator *accu, unsigned count) { if (accu->linear.count != count) func_0027E9D8(); func_0027D0D0(&accu->linear, &accu->erratic); if (accu->linear.count + accu->erratic.count != count) func_0027E9D8(); frame_heapsort(&accu->erratic); func_0027C2B0(&accu->linear, &accu->erratic); func_0026D5B8(accu->erratic.array); return accu->linear.array; }

