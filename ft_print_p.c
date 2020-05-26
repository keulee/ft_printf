/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 23:15:29 by keulee            #+#    #+#             */
/*   Updated: 2020/05/26 18:12:56 by keulee           ###   ########.fr       */
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
    tab->p_number = (long long int)tab->pointer;
    tab->string = ft_itoa_base(tab->p_number, "0123456789abcdef");
    tab->string_len = ft_strlen(tab->string) + 2;
    // printf("string : %s\n", tab->string);
    // printf("p_number : %lu\n", tab->p_number);
    if (tab->check_width == 0 && (tab->check_minus == 1 || tab->check_minus == 0) && tab->check_precision == 0 && tab->check_zero == 0)
    {
        ft_putstr("0x");
        ft_putnbr_base(tab->p_number, "0123456789abcdef");
        tab->len += tab->string_len;
    }
}
