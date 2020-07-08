/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:23:34 by keulee            #+#    #+#             */
/*   Updated: 2020/07/08 15:59:59 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_u_case_1_y_n_minus(t_struct *tab)
{
    if (tab->check_minus == 1)
    {
        ft_putnbr_u(tab->u_number);
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
        ft_putnbr_u(tab->u_number);
    }
}

void    ft_u_case_2_1_a(t_struct *tab)
{
    tab->len += tab->string_len;
    tab->precision = 0;
    tab->width = 0;
}

void    ft_u_case_2_1_b(t_struct *tab)
{
    tab->len += tab->width;
    tab->width = tab->width - tab->precision;
    tab->precision = tab->precision - tab->string_len;
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
