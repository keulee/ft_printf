/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_print_case.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:10:47 by keulee            #+#    #+#             */
/*   Updated: 2020/07/08 12:17:45 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	ft_di_case_1_y_zero(t_struct *tab)
{
	if (tab->number < 0)
	{
		ft_putchar('-');
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
		ft_putnbr(tab->number);
		while (tab->width-- > 0)
			ft_putchar(' ');
	}
	else
	{
		while (tab->width-- > 0)
			ft_putchar(' ');
		ft_putnbr(tab->number);
	}
}

void 	ft_di_case_2_1(t_struct *tab)
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

void 	ft_di_case_2_y_minus(t_struct *tab)
{
	if (tab->number < 0)
	{
		tab->number *= -1;
		ft_putchar('-');
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
		tab->number *= -1;
		ft_putchar('-');
	}
	while (tab->precision-- > 0)
		ft_putchar('0');
	ft_putnbr(tab->number);
}
