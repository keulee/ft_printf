/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:10:47 by keulee            #+#    #+#             */
/*   Updated: 2020/07/10 22:59:33 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void 	ft_di_case_1_y_zero(t_struct *tab)
{
	if (tab->number < 0)
	{
		ft_putchar('-');
		if (tab->number != -2147483648)
			tab->number *= -1;
	}
	while (tab->width-- > 0)
		ft_putchar('0');
	ft_putnbr(tab->number);
}

void 	ft_di_case_1_n_zero(t_struct *tab)
{
	if (tab->check_minus == 1)
	{
		if (tab->number == -2147483648)
			ft_putchar('-');
		ft_putnbr(tab->number);
		while (tab->width-- > 0)
			ft_putchar(' ');
	}
	else
	{
		while (tab->width-- > 0)
			ft_putchar(' ');
		if (tab->number == -2147483648)
			ft_putchar('-');
		ft_putnbr(tab->number);
	}
}

void 	ft_di_case_2_1_a(t_struct *tab)
{
	tab->len += tab->string_len;
	tab->precision = 0;
	tab->width = 0;
}

void 	ft_di_case_2_y_minus(t_struct *tab)
{
	if (tab->number < 0)
	{
		ft_putchar('-');
		if (tab->number != -2147483648)
			tab->number *= -1;
	}
	while (tab->precision-- > 0)
		ft_putchar('0');
	ft_putnbr(tab->number);
	while (tab->width-- > 0)
		ft_putchar(' ');
}

void 	ft_di_case_2_n_minus(t_struct *tab)
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
	if (tab->number < 0)
	{
		ft_putchar('-');
		if (tab->number != -2147483648)
			tab->number *= -1;
	}
	while (tab->precision-- > 0)
		ft_putchar('0');
	ft_putnbr(tab->number);
}
