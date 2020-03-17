#include "holberton.h"

/**
 * p_number - prints a number
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int p_number(va_list args)
{
        int a;
        int d;
        int l;
        unsigned int num;

        a  = va_arg(args, int);
        d = 1;
        l = 0;

        if (a < 0)
        {
                l += _putchar('-');
                num = a * -1;
        }
        else
                num = a;

        for (; num / d > 9; )
                d *= 10;

        for (; d != 0; )
        {
                l += _putchar('0' + num / d);
                num %= d;
                d /= 10;
        }

        return (l);
}
