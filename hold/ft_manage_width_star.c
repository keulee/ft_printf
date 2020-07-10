#include "ft_printf.h"

void ft_manage_width_star(const char *format, int *i, va_list my_list, int *len)
{
    int width;
    int s_width;

    s_width = va_arg(my_list, int);
    if (s_width > 0) // when number which replace * bigger than 0
    {
        width = s_width - 1;
        *len = *len + width;
        if (format[*i + 1] == '*')
        {
            while (width-- > 0)
                ft_putchar(' ');
            ft_putchar(va_arg(my_list, int));
        }
        else
        {
            ft_putchar(va_arg(my_list, int));
            while (width-- > 0)
                ft_putchar(' ');
        }
    }
    else // when number which replace * smaller than 0 or 0
    {
        if (s_width == 0)
            width = s_width;
        else
            width = (s_width * -1) - 1;
        *len = *len + width;
        ft_putchar(va_arg(my_list, int));
        while (width-- > 0)
            ft_putchar(' ');
    }
}
