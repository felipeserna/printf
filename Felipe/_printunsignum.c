#include "holberton.h"
/**
 * _printf_unsigned_int - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int _printf_unsigned_int(unsigned int n)
{
	int d;
	int l;
	unsigned int num;

	d = 1;
	l = 0;
	num = n;

	for (; num / d > 9;)
		d *= 10;

	for (; d != 0; )
	{
		l += _putchar('0' + num / d);
		num %= d;
		d /= 10;
	}
	return (l);
}
