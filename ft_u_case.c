/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:23:34 by keulee            #+#    #+#             */
/*   Updated: 2020/07/08 15:44:13 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_u_case_2_1(t_struct *tab)
{
    if ((tab->string_len >= tab->precision && tab->precision >= tab->width) || (tab->string_len >= tab->width && tab->width >= tab->precision))
    {
        tab->len += tab->string_len;
        tab->precision = 0;
        tab->width = 0;
    }
    else if (tab->width >= tab->precision && tab->precision >= tab->string_len)
    {
        tab->len += tab->width;
        tab->width = tab->width - tab->precision;
        tab->precision = tab->precision - tab->string_len;
    }
    else if (tab->width > tab->string_len && tab->string_len >= tab->precision)
    {
        tab->len += tab->width;
        tab->width = tab->width - tab->string_len;
        tab->precision = 0;
    }
    else if ((tab->precision > tab->width && tab->width >= tab->string_len) || (tab->precision > tab->string_len && tab->string_len >= tab->width))
    {
        tab->len += tab->precision;
        tab->precision = tab->precision - tab->string_len;
        tab->width = 0;
    }
}

void    ft_u_case_2_y_minus(t_struct *tab)
{
    while (tab->precision-- > 0)
        ft_putchar('0');
    ft_putnbr_u(tab->u_number);
    while (tab->width-- > 0)
        ft_putchar(' ');
}

void    ft_u_case_2_n_minus(t_struct *tab)
{
    if (tab->check_zero == 1)
    {
        while (tab->width-- > 0)
            ft_putchar('0');
    }
    else
    {
        while (tab->width-- > 0)
            ft_putchar(' ');
    }
    while (tab->precision-- > 0)
        ft_putchar('0');
    ft_putnbr_u(tab->u_number);
}
