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
                ft_print_di(&tab);
                // printf("number : %d\n", tab.number);
                // printf("number char : %s\n", tab.string);
                // printf("length : %d\n", tab.string_len);
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
