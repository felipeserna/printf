#include "holberton.h"

/**
 * _printfchar - Prints character
 * @list: list of arguments
 * Return: Return amount of characters printed.
 */
int _printfchar(va_list list)
{
        _putchar(va_arg(list, int));
        return (1);
}
