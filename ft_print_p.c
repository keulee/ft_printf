/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 23:15:29 by keulee            #+#    #+#             */
/*   Updated: 2020/06/20 16:14:33 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
** Function to print 'p'
*/
/*
** 인자를 16진수 주소로 표시한다.
** 0 flag와 .precision은 p와 함께 쓰이지 못한다.
*/
void    ft_print_p(t_struct *tab)
{
    tab->pointer = va_arg(tab->list, void *);
    tab->p_number = (unsigned long long)tab->pointer;
    tab->string = ft_utoa_base(tab->p_number, "0123456789abcdef");
    tab->string_len = ft_strlen(tab->string) + 2;
    if (tab->check_precision == 1)
        tab->check_precision = 0;
    if (tab->check_zero == 1)
        tab->check_zero = 0;
    else if (tab->check_width == 0 && (tab->check_minus == 1 || tab->check_minus == 0) && tab->check_precision == 0 && tab->check_zero == 0)
    {
        ft_putstr("0x");
        ft_putnbr_base(tab->p_number, "0123456789abcdef");
        tab->len += tab->string_len;
    }
    else if ((tab->check_width == 0 || tab->check_width == 1) && tab->check_precision == 1 && tab->precision == 0 && tab->p_number == 0) //예외
    {
        tab->len += tab->width;
        ft_putstr("0x");
        while (tab->width-- > 0)
            ft_putchar(' ');
    }
    else if (tab->check_width == 1)
    {
        if (tab->width > tab->string_len)
        {
            tab->len += tab->width;
            tab->width = tab->width - tab->string_len;
        }
        else
        {
            tab->len += tab->string_len;
            tab->width = 0;
        }
        if (tab->check_minus == 1)
        {
            ft_putstr("0x");
            ft_putnbr_base(tab->p_number, "0123456789abcdef");
            while (tab->width--)
                ft_putchar(' ');
        }
        else
        {
            while (tab->width--)
                ft_putchar(' ');
            ft_putstr("0x");
            ft_putnbr_base(tab->p_number, "0123456789abcdef");
        }
    }
}
