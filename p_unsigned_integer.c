#include "holberton.h"

/**
 * p_unsigned_integer - Prints Unsigned integers
 * n = input, m = max number,
 * i = iterator, j = print,
 * k = formated into decimal
 * @list: list
 * Return: unsigned integer
 */

int p_unsigned_integer(va_list list)
{
	unsigned int a[10];
	unsigned int i, m, n, k;
	int j;

	n = va_arg(list, unsigned int);
	m = 1000000000;
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	for (i = 0, k = 0, j = 0; i < 10; i++)
	{
		k += a[i];
		if (k || i == 9)
		{
			_putchar('0' + a[i]);
			j++;
		}
	}
	return (j);
}
