#include "holberton.h"

/**
 * p_unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: Return a acount the numbers
 */
int p_unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (p_unsigned_integer(num));

	if (num < 1)
		return (-1);
	return (p_unsigned_integer(num));
}
