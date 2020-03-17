#include "holberton.h"

/**
 * p_interger - Prints an integer
 * @list: list of arguments
 * Return: Return the amount of characters printed.
 */
int p_interger(va_list list)
{
        int num;

        num = p_number(list);
        return (num);
}
