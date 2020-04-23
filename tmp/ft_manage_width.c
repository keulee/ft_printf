#include "ft_printf.h"

void ft_manage_width(const char *format, va_list my_list, int *i, int *len, int width)
{
    *len = *len + width;
    if (format[*i + 1] == '-')
    {
        ft_putchar(va_arg(my_list, int));
        while (width-- > 0)
            ft_putchar(' ');
    }
    else
    {
        while (width-- > 0)
            ft_putchar(' ');
        ft_putchar(va_arg(my_list, int));
    }
}
