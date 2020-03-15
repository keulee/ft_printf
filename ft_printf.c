#include "ft_printf.h"

void   ft_printf(const char *src, ...)
{
    void (*tabFunction[3])(va_list *) = {ft_printf_s, ft_printf_c};
    char    tabIndex[4] = {'s', 'c', 'd', 0};
    va_list my_list;
    int     i;

    i = 0;
    va_start(my_list, src);
    while (src[i] != '\0')
    {
        if (i !=0 && src[i - 1] == '%')
        {
            if (src[i] == 'c')
                ft_printf_c(&my_list);
            if (src[i] == 's')
                ft_printf_s(&my_list);
        }
        else if (src[i] != '%')
            ft_putchar(src[i]);
        i++;
    }
}
