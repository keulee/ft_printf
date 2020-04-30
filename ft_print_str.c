#include "ft_printf.h"
/*
** Function to print 's'
*/
void    ft_print_str(t_struct *tab)
{
    tab->string = va_arg(tab->list, char *);
    tab->string_len = ft_strlen(tab->string);
    if (tab->check_width == 0 && (tab->check_minus == 1 || tab->check_minus == 0) && tab->check_precision == 0) // %s & %-s
    {
        ft_putstr(tab->string);
        tab->len += tab->string_len;
    }
    else if (tab->check_width == 1 && tab->check_precision == 0) //just width
    {
        if (tab->width == 0) //0 is Error case;
            ft_putstr("flag '0' results in undefined behavior with 's' conversion specifier");
        if (tab->width <= tab->string_len)
        {
            tab->len += tab->string_len;
            ft_putstr(tab->string);
        }
        else
        {
            tab->width = tab->width - tab->string_len;
            tab->len += tab->width + tab->string_len;
            if (tab->check_minus == 0)
            {
                while (tab->width-- > 0)
                    ft_putchar(' ');
                ft_putstr(tab->string);
            }
            else
            {
                ft_putstr(tab->string);
                while (tab->width-- > 0)
                    ft_putchar(' ');
            }
        }
    }
    else if (tab->check_width == 0 && tab->check_precision == 1 && (tab->check_minus == 0 || tab->check_minus == 1)) // when .precision exist
    {
        if (tab->precision < tab->string_len) //when .precision is smaller than string length
            tab->len += tab->precision;
        else //when .precision is bigger than string length
        {
            tab->len += tab->string_len;
            tab->precision = tab->string_len;
        }
        while (tab->index < tab->precision)
            ft_putchar(tab->string[tab->index++]);
    }
    else if (tab->check_width == 1 && tab->check_precision == 1)
    {
        if (tab->precision > tab->string_len)
            tab->precision = tab->string_len;
        if (tab->width > tab->precision)
            tab->width = tab->width - tab->precision;
        else
            tab->width = 0;
        tab->len += tab->width + tab->precision;
        if (tab->check_minus == 0)
        {
            while (tab->width-- > 0)
                ft_putchar(' ');
            while (tab->index < tab->precision)
                ft_putchar(tab->string[tab->index++]);
        }
        else
        {
            while (tab->index < tab->precision)
                ft_putchar(tab->string[tab->index++]);
            while (tab->width-- > 0)
                ft_putchar(' ');
        }
    }
}
