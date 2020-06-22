/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 23:15:29 by keulee            #+#    #+#             */
/*   Updated: 2020/06/22 18:25:48 by keulee           ###   ########.fr       */
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
    // printf("tab->pointer: %p\n", tab->pointer);
    tab->p_number = (unsigned long long)tab->pointer;
    // printf("tab->p_number : %llu\n", tab->p_number);
    tab->string = ft_utoa_base(tab->p_number, "0123456789abcdef");
    tab->string_len = ft_strlen(tab->string) + 2;
    // if (tab->check_precision == 1 || tab->check_width == 1)
    //     tab->check_precision = 0;
    if ((tab->width == 0 && tab->p_number == 0 && tab->check_width == 0 && tab->check_precision == 1) || (tab->p_number == 0 && tab->check_width == 1 && tab->check_precision == 1))
    // (tab->p_number == 0 && tab->check_width == 1 && tab->check_precision == 0))
    {
        // printf("here2\n");
        tab->len += 2;
        if (tab->width > 0)
        {
            tab->width = tab->width - 2;
            tab->len += tab->width;
            if (tab->width < 0)
                tab->len++;
        }
        if (tab->check_minus == 1)
        {
            ft_putstr("0x");
            while (tab->width-- > 0)
                ft_putchar(' ');
        }
        else
        {
            while (tab->width-- > 0)
                ft_putchar(' ');
            ft_putstr("0x");
        }
    }
    else if (tab->check_width == 0 && (tab->check_precision == 0 || tab->check_precision ==1))
    {
        // printf("here1\n");
        ft_putstr("0x");
        ft_putnbr_base(tab->p_number, "0123456789abcdef");
        tab->len += tab->string_len;
    }
    else if (tab->check_width == 1 && (tab->check_precision == 0 || tab->check_precision ==1))
    {
        // printf("here3\n");
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
    // else if ()
}
