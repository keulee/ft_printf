#include "ft_printf.h"
/*
** ft_printf which works as same as 'the' printf
*/
/*
** This function returns a negative value if an error occurs. (remind it)
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
                ft_print_str(&tab);
            if (tab.specifier == 'd' || tab.specifier == 'i')
            {
                // printf("check_width : %d\n", tab.check_width);
                // printf("width : %d\n", tab.width);
                // printf("check_minus : %d\n", tab.check_minus);
                // printf("check_zero : %d\n", tab.check_zero);
                // printf("check_precision : %d\n", tab.check_precision);
                ft_print_di(&tab);
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
