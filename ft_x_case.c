/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:05:56 by keulee            #+#    #+#             */
/*   Updated: 2020/07/08 16:20:15 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_x_case_1_y_n_minus(t_struct *tab)
{
    if (tab->check_minus == 1)
    {
        ft_putnbr_base(tab->u_number, "0123456789abcdef");
        while (tab->width-- > 0)
            ft_putchar(' ');
    }
    else
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
        ft_putnbr_base(tab->u_number, "0123456789abcdef");
    }
}

void    ft_x_case_2_a(t_struct *tab)
{
    tab->len += tab->string_len;
    tab->precision = 0;
    tab->width = 0;
}

void    ft_x_case_2_b(t_struct *tab)
{
    tab->len += tab->width;
    tab->width = tab->width - tab->precision;
    tab->precision = tab->precision - tab->string_len;
}

void    ft_x_case_2_y_minus(t_struct *tab)
{
    while (tab->precision-- > 0)
        ft_putchar('0');
    ft_putnbr_base(tab->u_number, "0123456789abcdef");
    while (tab->width-- > 0)
        ft_putchar(' ');
}

void    ft_x_case_2_n_minus(t_struct *tab)
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
    ft_putnbr_base(tab->u_number, "0123456789abcdef");
}
