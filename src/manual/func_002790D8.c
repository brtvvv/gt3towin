typedef struct frame_state { void *cfa; void *eh_ptr; long cfa_offset; long args_size; long reg_or_offset[80]; unsigned short cfa_reg; unsigned short retaddr_column; char saved[80]; } frame_state;
typedef long word_type;
void func_0027E9D8(void) __attribute__((noreturn));
frame_state *func_0027CEF8(void *, frame_state *); word_type *func_00278FD0(unsigned, frame_state *, frame_state *);
static inline word_type get_reg(unsigned reg, frame_state *udata, frame_state *sub_udata) { return *func_00278FD0(reg, udata, sub_udata); }
frame_state *func_002790D8(void *pc, frame_state *udata, frame_state *caller_udata) { caller_udata = func_0027CEF8(pc, caller_udata); if (!caller_udata) return 0; if (udata->saved[caller_udata->cfa_reg]) caller_udata->cfa = (void *)get_reg(caller_udata->cfa_reg, udata, 0); else caller_udata->cfa = udata->cfa; caller_udata->cfa = (char *)caller_udata->cfa + caller_udata->cfa_offset; return caller_udata; }

