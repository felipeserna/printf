#include "holberton.h"
/**
 * p_string - Prints a string
 * @list: list of arguments
 * Return: Amount of characters printed.
 */
int p_string(va_list list)
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
