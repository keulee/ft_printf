#include "ft_printf.h"

void    ft_printf_s(va_list *my_list)
{
    char *str;

    str = va_arg(*my_list, char *);
    ft_putstr(str);
}
