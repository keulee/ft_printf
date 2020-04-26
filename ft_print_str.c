#include "ft_printf.h"
/*
** Function to print 's'
*/
void    ft_print_str(t_struct *tab)
{
    tab->string = va_arg(tab->list, char *);
    tab->string_len = ft_strlen(tab->string);
    // printf("width : %d\n", tab->width);
    // printf("string_len : %d\n", tab->string_len);
    if (tab->check_width == 1 && tab->check_minus == 0) //just width
    {
        if (tab->width > tab->string_len) // when width is bigger than string length
        {
            tab->width = tab->width - tab->string_len;
            tab->len += tab->width;
            while (tab->width-- > 0)
                ft_putchar(' ');
            ft_putstr(tab->string);
            // printf("width: %d\n", tab->width);
        }
        else // when width is the same or smaller than width
        {
            if (tab->width == 0) //0 is Error case;
                ft_putstr("flag '0' results in undefined behavior with 's' conversion specifier");
            else
                ft_putstr(tab->string);
        }
        tab->len += tab->string_len;
    }
    else if (tab->check_minus == 1 && tab->check_width == 1) //when -flag and width exist
    {
        if (tab->width > tab->string_len) //when string length is smaller than the width
        {
            tab->width = tab->width - tab->string_len;
            tab->len += tab->width;
            ft_putstr(tab->string);
            while (tab->width-- > 0)
                ft_putchar(' ');
        }
        else // when string length is the same or bigger than the width
        {
            if (tab->width == 0) //0 is Error case;
                ft_putstr("flag '0' results in undefined behavior with 's' conversion specifier");
            else
                ft_putstr(tab->string);
        }
        tab->len += tab->string_len;
    }
    else if (tab->check_precision == 1) // when .precision exist
    {

        if (tab->precision < tab->string_len)
            tab->len += tab->precision;
        else
        {
            tab->len += tab->string_len;
            tab->precision = tab->string_len;
        }
        while (tab->index < tab->precision) //have to fix
            ft_putchar(tab->string[tab->index++]);
    }
    else // just %s
    {
        ft_putstr(tab->string);
        tab->len += tab->string_len;
    }

}
