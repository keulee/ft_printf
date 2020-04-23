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
        }
        else // just character out of % and type (c)
            ft_putchar(tab.str[tab.i]);
        tab.i++; // for the tab.string to go foward
        tab.len++; // for return
        ft_option_clear(&tab);
    }
    va_end (tab.list); // close the list
    return (tab.len);
}
