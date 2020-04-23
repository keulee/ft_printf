#include "ft_printf.h"

void    ft_printf_c(va_list *my_list)
{
    char c;

    c = va_arg(*my_list, int);
    ft_putchar(c);
}
