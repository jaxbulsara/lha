/* This file was generated by cproto */
#if PROTOTYPES /* defined in config.h */
#define P_(s) s
#else
#define P_(s) ()
#endif

/* append.c */
int encode_lzhuf P_((FILE *infp, FILE *outfp, long size, long *original_size_var, long *packed_size_var, char *name, char *hdr_method));
void start_indicator P_((char *name, long size, char *msg, long def_indicator_threshold));
void finish_indicator2 P_((char *name, char *msg, int pcnt));
void finish_indicator P_((char *name, char *msg));
/* crcio.c */
void make_crctable P_((void));
unsigned short calccrc P_((unsigned char *p, unsigned int n));
void fillbuf P_((int n));
unsigned short getbits P_((int n));
void putcode P_((int n, int x));
void putbits P_((int n, int x));
int fread_crc P_((unsigned char *p, int n, FILE *fp));
void fwrite_crc P_((unsigned char *p, int n, FILE *fp));
void init_code_cache P_((void));
void init_getbits P_((void));
void init_putbits P_((void));
int fwrite_txt P_((unsigned char *p, int n, FILE *fp));
int fread_txt P_((unsigned char *p, int n, FILE *fp));
unsigned short calc_header_crc P_((unsigned char *p, unsigned int n));
/* dhuf.c */
void start_c_dyn P_((void));
void decode_start_dyn P_((void));
unsigned short decode_c_dyn P_((void));
unsigned short decode_p_dyn P_((void));
void output_dyn P_((unsigned int code, unsigned int pos));
void encode_end_dyn P_((void));
/* extract.c */
int decode_lzhuf P_((FILE *infp, FILE *outfp, long original_size, long packed_size, char *name, int method));
/* header.c */
int calc_sum P_((register char *p, register int len));
boolean get_header P_((FILE *fp, register LzHeader *hdr));
void init_header P_((char *name, struct stat *v_stat, LzHeader *hdr));
void write_header P_((FILE *nafp, LzHeader *hdr));
char *sjis_to_utf8 P_((char *dst, const char *src, size_t dstsize));
char *utf8_to_sjis P_((char *dst, const char *src, size_t dstsize));
void euc2sjis P_((int *p1, int *p2));
void sjis2euc P_((int *p1, int *p2));
/* huf.c */
void output_st1 P_((int c, int p));
unsigned char *alloc_buf P_((void));
void encode_start_st1 P_((void));
void encode_end_st1 P_((void));
unsigned short decode_c_st1 P_((void));
unsigned short decode_p_st1 P_((void));
void decode_start_st1 P_((void));
/* larc.c */
unsigned short decode_c_lzs P_((void));
unsigned short decode_p_lzs P_((void));
void decode_start_lzs P_((void));
unsigned short decode_c_lz5 P_((void));
unsigned short decode_p_lz5 P_((void));
void decode_start_lz5 P_((void));
/* lhadd.c */
FILE *append_it P_((char *name, FILE *oafp, FILE *nafp));
void temporary_to_new_archive_file P_((long new_archive_size));
void cmd_add P_((void));
void cmd_delete P_((void));
int strcmp_filename P_((char *str1, char *str2));
/* lharc.c */
int main P_((int argc, char *argv[]));
void message P_((char *fmt, ...));
void warning P_((char *fmt, ...));
void error P_((char *fmt, ...));
void fatal_error P_((char *fmt, ...));
char *xmalloc P_((int size));
char *xrealloc P_((char *old, int size));
char *xstrdup P_((char *str));
void init_sp P_((struct string_pool *sp));
void add_sp P_((struct string_pool *sp, char *name, int len));
void finish_sp P_((register struct string_pool *sp, int *v_count, char ***v_vector));
void free_sp P_((char **vector));
void cleaning_files P_((int *v_filec, char ***v_filev));
boolean find_files P_((char *name, int *v_filec, char ***v_filev));
void free_files P_((int filec, char **filev));
int build_temporary_name P_((void));
void build_backup_name P_((char *buffer, char *original));
void build_standard_archive_name P_((char *buffer, char *orginal));
boolean need_file P_((char *name));
FILE *xfopen P_((char *name, char *mode));
FILE *open_old_archive P_((void));
int inquire P_((char *msg, char *name, char *selective));
void write_archive_tail P_((FILE *nafp));
void copy_old_one P_((FILE *oafp, FILE *nafp, LzHeader *hdr));
/* lhext.c */
void cmd_extract P_((void));
/* lhlist.c */
void cmd_list P_((void));
/* maketbl.c */
void make_table P_((int nchar, unsigned char bitlen[], int tablebits, unsigned short table[]));
/* maketree.c */
void make_code P_((int n, unsigned char len[], unsigned short code[]));
short make_tree P_((int nparm, unsigned short freqparm[], unsigned char lenparm[], unsigned short codeparm[]));
/* patmatch.c */
int patmatch P_((register char *p, register char *s, int f));
/* shuf.c */
void decode_start_st0 P_((void));
void encode_p_st0 P_((int j));
void encode_start_fix P_((void));
void decode_start_fix P_((void));
unsigned short decode_c_st0 P_((void));
unsigned short decode_p_st0 P_((void));
/* slide.c */
int encode_alloc P_((int method));
void encode P_((struct interfacing *interface));
void decode P_((struct interfacing *interface));
/* util.c */
long copyfile P_((FILE *f1, FILE *f2, long size, int crc_flg));
int encode_stored_crc P_((FILE *ifp, FILE *ofp, long size, long *original_size_var, long *write_size_var));
unsigned char *convdelim P_((unsigned char *path, int delim));
boolean archive_is_msdos_sfx1 P_((char *name));
boolean skip_msdos_sfx1_code P_((FILE *fp));
int strucmp P_((register char *s, register char *t));
int xsnprintf P_((char *dest, size_t size, char *fmt, ...));
char *xstrchr P_((const char *s, int c));
char *xstrrchr P_((const char *s, int c));
char *xmemchr P_((const char *s, int c, size_t n));
char *xmemrchr P_((const char *s, int c, size_t n));

/* lharc.c */
RETSIGTYPE interrupt(int signo);
/* util.c */
#if !HAVE_STRDUP
char *strdup P_((char *buf));
#endif
#if !HAVE_MEMSET
char *memset P_((char *s, int c, int n));
#endif

/* vsnprintf.c */
#if !HAVE_VSNPRINTF
int vsnprintf P_((char *str, size_t n, const char *fmt, va_list ap));
int snprintf P_((char *str, size_t n, char const *fmt, ...));
#endif

#undef P_
