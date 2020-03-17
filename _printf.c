#include "holberton.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: All the desired characters
 * Return: Total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed;
	func_t f_list[] = {
		{"c", p_char},
		{"s", p_string},
		{"%", p_porcent},
		{"d", p_interger},
		{"i", p_interger},
		{"u", p_unsigned_int},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed = analyzer(format, f_list, arg_list);
	va_end(arg_list);
	return (printed);
}
