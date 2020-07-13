/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xx_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:28:04 by k                 #+#    #+#             */
/*   Updated: 2020/07/10 23:02:37 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    ft_xx_case_1_y_n_minus(t_struct *tab)
{
    if (tab->check_minus == 1)
    {
        ft_putnbr_base(tab->u_number, "0123456789ABCDEF");
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
        ft_putnbr_base(tab->u_number, "0123456789ABCDEF");
    }
}

void    ft_xx_case_2_a(t_struct *tab)
{
    tab->len += tab->string_len;
    tab->precision = 0;
    tab->width = 0;
}

void    ft_xx_case_2_b(t_struct *tab)
{
    tab->len += tab->width;
    tab->width = tab->width - tab->precision;
    tab->precision = tab->precision - tab->string_len;
}

void    ft_xx_case_2_y_n_minus(t_struct *tab)
{
    if (tab->check_minus == 1)
    {
        while (tab->precision-- > 0)
            ft_putchar('0');
        ft_putnbr_base(tab->u_number, "0123456789ABCDEF");
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
        while (tab->precision-- > 0)
            ft_putchar('0');
        ft_putnbr_base(tab->u_number, "0123456789ABCDEF");
    }
}
