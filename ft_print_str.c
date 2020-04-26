#include "ft_printf.h"
/*
** Function to print 's'
*/
void    ft_print_str(t_struct *tab)
{
    tab->string = va_arg(tab->list, char *);
    tab->string_len = ft_strlen(tab->string);
    tab->len += tab->string_len;
    // printf("width : %d\n", tab->width);
    // printf("string_len : %d\n", tab->string_len);
    if (tab->check_minus == 1 && tab->check_width == 1)
    {
        if (tab->width > tab->string_len)
        {
            tab->width = tab->width - tab->string_len;
            tab->len += tab->width;
            ft_putstr(tab->string);
            while (tab->width-- > 0)
                ft_putchar(' ');
        }
        else
        {
            if (tab->width == 0) //Error case;
                ft_putstr("flag '0' results in undefined behavior with 's' conversion specifier");
            else
                ft_putstr(tab->string);
        }
    }
    else if (tab->check_width == 1 && tab->check_minus == 0)
    {
        if (tab->width > tab->string_len)
        {
            tab->width = tab->width - tab->string_len;
            tab->len += tab->width;
            while (tab->width-- > 0)
                ft_putchar(' ');
            ft_putstr(tab->string);
            // printf("width: %d\n", tab->width);
        }
        else
        {
            if (tab->width == 0) //Error case;
                ft_putstr("flag '0' results in undefined behavior with 's' conversion specifier");
            else
                ft_putstr(tab->string);
        }
    }

    else
        ft_putstr(tab->string);

}
