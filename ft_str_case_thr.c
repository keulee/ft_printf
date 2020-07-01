/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_case_thr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 00:25:30 by keulee            #+#    #+#             */
/*   Updated: 2020/07/02 00:26:00 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_str_case_thr(t_struct *tab)
{
    if (tab->precision > tab->string_len)
        tab->precision = tab->string_len;
    if (tab->width > tab->precision)
        tab->width = tab->width - tab->precision;
    else
        tab->width = 0;
    tab->len += tab->width + tab->precision;
    if (tab->check_minus == 0)
    {
        while (tab->width-- > 0)
            ft_putchar(' ');
        while (tab->index < tab->precision)
            ft_putchar(tab->string[tab->index++]);
    }
    else
    {
        while (tab->index < tab->precision)
            ft_putchar(tab->string[tab->index++]);
        while (tab->width-- > 0)
            ft_putchar(' ');
    }
}
