#ifndef
#define

#include <stdarg.h>

/* head file */
int _printf(const char *format, ...);

char* fmt_mngr(char *);

/* funtion callers */
char *(*fmt_func_caller(char *))(char *s);
char *(*flag_func_caller(char *))(char *s);

#endif
