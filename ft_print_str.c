#include "ft_printf.h"
/*
** Function to print 's'
*/
void    ft_print_str(t_struct *tab)
{
    tab->string = va_arg(tab->list, char *);
    tab->string_len = ft_strlen(tab->string);
    tab->len += tab->string_len;
    if (tab->check_width == 1 && tab->width > tab->string_len)
    {
        tab->width = tab->width - tab->string_len;
        tab->len += tab->width;
        while (tab->width-- > 0)
            ft_putchar(' ');
        ft_putstr(tab->string);
        // printf("width: %d\n", tab->width);
    }
    else
        ft_putstr(tab->string);

}
