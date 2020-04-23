#include "ft_printf.h"

void    ft_print_char(t_struct *tab)
{
    tab->len = tab->len + tab->width;
    if (tab->check_width == 0 && tab->check_minus == 0 && tab-> check_s_width == 0)
        ft_putchar(va_arg(tab->list, int));
    else if (tab->check_minus == 1)
    {
        ft_putchar(va_arg(tab->list, int));
        while (tab->width-- > 0)
            ft_putchar(' ');
    }
    else
    {
        while (tab->width-- > 0)
            ft_putchar(' ');
        ft_putchar(va_arg(tab->list, int));
    }
}
