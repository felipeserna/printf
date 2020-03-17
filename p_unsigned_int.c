/**                                                                                                                      * _printf_unsigned_int - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: Return a acount the numbers
 */                                                                                                                     int _printf_unsigned_int(va_list list)
{
        unsigned int uns;                                                                                                                                                                                                                               uns = va_arg(list, unsigned int);                                                                               
        if (uns == 0)
                return (p_unsigned_int(uns));

        if (uns < 1)
                return (-1);
        return (p_unsigned_int(uns));
}
