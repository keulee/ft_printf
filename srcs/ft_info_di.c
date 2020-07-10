/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 11:36:32 by keulee            #+#    #+#             */
/*   Updated: 2020/07/10 23:59:41 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    ft_info_di(t_struct *tab)
{
    tab->number = va_arg(tab->list, int);
    tab->string = ft_itoa(tab->number);
    tab->string_len = ft_strlen(tab->string);
    if (tab->check_minus == 1 && tab->check_zero == 1)
        tab->check_zero = 0;
    if (tab->check_precision == 1 && tab->check_zero == 1)
        tab->check_zero = 0;
}

void 	ft_di_case_0(t_struct *tab)
{
	if (tab->number == -2147483648)
		ft_putchar('-');
	ft_putnbr(tab->number);
	tab->len += tab->string_len;
}
