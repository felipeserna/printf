#include "holberton.h"
/**
 * _printfchar - Prints character
 * @list: list of arguments
 * Return: amount of characters printed.
 */
int _printfchar(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 * _printfstrg - Prints a string
 * @list: list of arguments
 * Return: Return the amount of characters printed.
 */
int _printfstrg(va_list list)
{
	int a;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	return (a);
}
/**
 * _printfporc - Prints a percent
 * @list: list of arguments
 * Return: Return the amount of characters printed.
 */
int _printfporc(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
/**
 * _printfint - Prints an integer
 * @list: list of arguments
 * Return: Return the amount of characters printed.
 */
int _printfint(va_list list)
{
	int num;

	num = _printnum(list);
	return (num);
}
/**
 * _printf_unsigned_int_list - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: Return a acount the numbers
 */
int _printf_unsigned_int(va_list list)
{
	unsigned int uns;

	uns = va_arg(list, unsigned int);

	if (uns == 0)
		return (_printf_unsigned_int(uns));

	if (uns < 1)
		return (-1);
	return (_printf_unsigned_int(uns));
}
