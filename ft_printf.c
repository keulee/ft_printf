/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:06:59 by keulee            #+#    #+#             */
/*   Updated: 2020/05/30 16:02:46 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
                ft_print_di(&tab);
            if (tab.specifier == 'u')
                ft_print_u(&tab);
            if (tab.specifier == 'p')
                ft_print_p(&tab);
            if (tab.specifier == 'x')
                ft_print_x(&tab);
            if (tab.specifier == 'X')
                ft_print_xx(&tab);
            if (tab.specifier == '%')
                ft_print_percent(&tab);
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
