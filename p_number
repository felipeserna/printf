#include "holberton.h"

/**
 * _printnum - prints a number
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_number(va_list args)
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
                l += _write('-');
                num = a * -1;
        }
        else
                num = a;

        for (; num / d > 9; )
                d *= 10;

        for (; d != 0; )
        {
                l += _write('0' + num / d);
                num %= d;
                d /= 10;
        }

        return (l);
}
