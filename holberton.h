#ifndef PRINT_F
#define PRINT_F
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/*La struct functions sirve para definir una estructura
para simbolos y funciones */

struct functions
{
	char *sym;
	int (*f)(va_list);
};
typedef struct functions func_t;

int analyzer(const char *format, func_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int p_char(va_list);
int p_string(va_list);
int p_porcent(va_list);
int p_interger(va_list);
int p_number(va_list);
int p_unsigned_integer(va_list);
int print_unsgined_number(unsigned int);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
