typedef struct { unsigned length; int CIE_delta; void *pc_begin; unsigned pc_range; } fde;
struct fde_vector { fde **array; unsigned count; };
struct fde_accumulator { fde_vector linear; fde_vector erratic; };
static inline fde *next_fde(fde *f) { return (fde *)((char *)f + f->length + sizeof(f->length)); }
static inline void fde_insert(fde_accumulator *accu, fde *this_fde) { accu->linear.array[accu->linear.count++] = this_fde; }
extern "C" void func_0027C660(fde *this_fde, fde_accumulator *accu, void **beg_ptr, void **end_ptr) { void *pc_begin = *beg_ptr; void *pc_end = *end_ptr; for (; this_fde->length != 0; this_fde = next_fde(this_fde)) { if (this_fde->CIE_delta == 0 || this_fde->pc_begin == 0) continue; fde_insert(accu, this_fde); if (this_fde->pc_begin < pc_begin) pc_begin = this_fde->pc_begin; if ((char *)this_fde->pc_begin + this_fde->pc_range > pc_end) pc_end = (char *)this_fde->pc_begin + this_fde->pc_range; } *beg_ptr = pc_begin; *end_ptr = pc_end; }

