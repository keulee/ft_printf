#include "ft_printf.h"

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
                printf("specifier : %c\n", tab.specifier);
                printf("check_minus : %d\n", tab.check_minus);
                printf("check_width : %d\n", tab.check_width);
                printf("check_width : %d\n", tab.check_width);
                printf("width : %d\n", tab.width);
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
