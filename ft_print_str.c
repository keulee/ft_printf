#include "ft_printf.h"
/*
** Function to print 's'
*/
void    ft_print_str(t_struct *tab)
{
    char *str_arg;

    str_arg = va_arg(tab->list, char *);
    ft_putstr(str_arg);
    tab->len += ft_strlen(str_arg);
}
