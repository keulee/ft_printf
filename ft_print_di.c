#include "ft_printf.h"

void    ft_print_di(t_struct *tab)
{
    tab->number = va_arg(tab->list, int);
    tab->string = ft_itoa(tab->number);
    tab->string_len = ft_strlen(tab->string);
    if (tab->check_width == 0 && (tab->check_minus == 1 || tab->check_minus == 0) && tab->check_precision == 0)
    {
        ft_putnbr(tab->number);
        tab->len += tab->string_len;
    }
}
