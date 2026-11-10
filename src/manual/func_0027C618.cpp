typedef struct { unsigned length; int CIE_delta; void *pc_begin; unsigned pc_range; } fde;
static inline fde *next_fde(fde *f) { return (fde *)((char *)f + f->length + sizeof(f->length)); }
extern "C" unsigned func_0027C618(fde *this_fde) { unsigned count; for (count = 0; this_fde->length != 0; this_fde = next_fde(this_fde)) { if (this_fde->CIE_delta == 0 || this_fde->pc_begin == 0) continue; ++count; } return count; }

