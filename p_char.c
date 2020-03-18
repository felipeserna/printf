#include "holberton.h"
/**
 * p_char - Prints character
 * @list: list of arguments
 * Return: Amount of characters printed.
 */
int p_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
