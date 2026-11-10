extern "C" {
typedef void *(*__eh_matcher)(void *, void *, void *);
typedef struct { __eh_matcher match_function; } __eh_info;
typedef struct exception_table { void *start_region; void *end_region; void *exception_handler; void *match_info; } exception_table;
typedef struct { short language; short version; } exception_lang_info;
typedef struct exception_descriptor { void *runtime_id_field; exception_lang_info lang; exception_table table[1]; } exception_descriptor;
void *func_00278E88(void *pc, exception_descriptor *table, __eh_info *eh_info, int rethrow, int *cleanup) { void *retval = 0; *cleanup = 1;
 if (table) { int pos = 0; exception_table *tab = &(table->table[0]);
  if (rethrow) { pos = (exception_table *)pc - tab; pc = (char *)((exception_table *)pc)->end_region - 1; if (tab[pos].start_region != (void *)-1) pos++; } else pc = (char *)pc - 1;
  for (; tab[pos].start_region != (void *)-1; pos++) { if (tab[pos].start_region <= pc && tab[pos].end_region > pc) { if (tab[pos].match_info) { __eh_matcher matcher = eh_info->match_function; if (matcher) { void *ret = (*matcher)((void *)eh_info, tab[pos].match_info, table); if (ret) { if (retval == 0) retval = tab[pos].exception_handler; *cleanup = 0; return retval; } } } else { if (retval == 0) retval = tab[pos].exception_handler; } } } }
 return retval; }
}

