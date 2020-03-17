#ifndef PRINT_F
#define PRINT_F
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

struct functions
{
	char *sym;
	int (*f)(va_list);
};
typedef struct functions func_t;

int analyzer(const char *format, func_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar.c(char);
int p_char(va_list);
int p_string(va_list);
int p_porcent(va_list);
int p_interger(va_list);
int p_number(va_list);
int p_unsigned_int(va_list);

#endif
