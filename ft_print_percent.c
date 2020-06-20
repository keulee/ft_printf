/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 16:03:01 by keulee            #+#    #+#             */
/*   Updated: 2020/06/20 17:59:17 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print_percent(t_struct *tab)
{
    tab->string = "%";
    tab->string_len = ft_strlen(tab->string);
    if (tab->check_precision == 1)
    {
        tab->check_precision = 0;
        tab->precision = 0;
    }
    if (tab->check_zero == 1 && tab->check_minus == 1)
        tab->check_zero = 0;
    if (tab->check_width == 0 && (tab->check_minus == 1 || tab->check_minus == 0) && tab->check_precision == 0 && tab->check_zero == 0)
    {
        ft_putchar('%');
        tab->len++;
    }
    else if (tab->check_width == 1 && tab->check_precision == 0)
    {
        if (tab->width == 0)
            tab->len++;
        tab->width = tab->width - tab->string_len;
        tab->len += tab->width;
        if (tab->check_zero == 1)
        {
            while (tab->width-- > 0)
                ft_putchar('0');
            ft_putchar('%');
        }
        else
        {
            if (tab->check_minus == 1)
            {
                ft_putchar('%');
                while (tab->width-- > 0)
                    ft_putchar(' ');
            }
            else
            {
                while (tab->width-- > 0)
                    ft_putchar(' ');
                ft_putchar('%');
            }
        }
        tab->len += tab->string_len;
    }
    else if ((tab->check_width == 0 || tab->check_width == 1) && tab->check_precision == 1 && tab->precision == 0)
    {
        tab->len += tab->width;
        while (tab->width-- > 0)
            ft_putchar(' ');
        ft_putchar('%');
        tab->len++;
    }
}
