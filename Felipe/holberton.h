#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c);
int _printfchar(va_list list);
int _printfstrg(va_list list);
int _printfporc(__attribute__((unused))va_list list);
int _printfint(va_list list);
int _printf_unsigned_int(va_list list);
int _printnum(va_list args);
int _printf_unsigned_int(unsigned int n);
#endif /* HOLBERTON_H */
