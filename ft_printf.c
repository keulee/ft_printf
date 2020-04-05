#include "ft_printf.h"
#include <stdio.h>

void    ft_init(t_tab *t_val)
{
    t_val->i = 0;
    t_val->len = 0;
}
void    ft_print_char(t_tab *t_val)
{
    ft_putchar(va_arg(t_val->list, int));
    t_val->len = t_val->len + 1;
}

void    ft_print_str(t_tab *t_val)
{
    ft_putstr(va_arg(t_val->list, char *));
}

int    ft_printf(const char *format, ...)
{
    //void (*tabFunction[2])(va_list *) = {ft_printf_s, ft_printf_c};
    //char    tabIndex[3] = {'s', 'c', 0};
    //int     tmpIndex;
    //int     ret;
    //va_list list;
    //int     i;

    //i = 0;
    t_tab t_val;
    ft_init(&t_val);

    //t_val.i = 0;
    va_start(t_val.list, format);
    while (format && format[t_val.i] != '\0')
    {
        if (format[t_val.i] == '%')
        {
            if (format[t_val.i + 1] == 'c')
                ft_print_char(&t_val);
            if (format[t_val.i + 1] == 's')
                ft_print_str(&t_val);
            if (format[t_val.i + 1] == '%')
                ft_putchar('%');
            if (format[t_val.i + 1] == 'd' || format[t_val.i + 1] == 'i')
                ft_putnbr(va_arg(t_val.list, int));
            /*if (format[t_val.i + 1] == 'p')
            if (format[i + 1] == 'u')
            if (format[i + 1] == 'x')
            if (format[i + 1] == 'X')*/
            t_val.i++;
        }
        else
        {
            ft_putchar(format[t_val.i]);
            t_val.len++;
        }
        t_val.i++;
    }
    va_end(t_val.list);

    // tmpIndex = 0;
    // va_start(my_list, format);
    // while (format[t_val.i] != '\0')
    // {
    //     if (i !=0 && format[i - 1] == '%')
    //     {
    //         tmpIndex = ft_findIndex(tabIndex, format[i]);
    //         if (tmpIndex != -1)
    //             (*tabFunction[tmpIndex])(&my_list);
    //     }
    //     else if (format[i] != '%')
    //         ft_putchar(format[i]);
    //     i++;
    // }

    return (t_val.len);
}
