#include "ft_printf.h"
/*
** ft_printf which works as same as 'the' printf
*/
int    ft_printf(const char *str, ...)
{
    t_struct tab;

    va_start(tab.list, str);
    ft_init(&tab, str);
    while (tab.str[tab.i] != '\0')
    {
        if (tab.str[tab.i] == '%')
        {
            ft_find_option(&tab);
            if (tab.specifier == 'c')
                ft_print_char(&tab);
            if (tab.specifier == 's')
            {
                // printf("check_width : %d\n", tab.check_width);
                // printf("check_precision : %d\n", tab.check_precision);
                // printf("check_minus : %d\n", tab.check_minus);
                // printf("width : %d\n", tab.width);
                // printf("precision : %d\n", tab.precision);
                ft_print_str(&tab);
            }
        }
        else
        {
            ft_putchar(tab.str[tab.i]);
            tab.len++;
        }
        tab.i++;
        ft_option_clear(&tab);
    }
    va_end (tab.list);
    return (tab.len);
}
