/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:59:31 by keulee            #+#    #+#             */
/*   Updated: 2020/07/08 11:00:15 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	ft_info_percent(t_struct *tab)
{
	tab->string = "%";
    tab->string_len = ft_strlen(tab->string);
    if (tab->check_precision == 1)
    {
        tab->check_precision = 0;
        tab->precision = 0;
    }
    if (tab->check_zero == 1 && tab->check_minus == 1)
        tab->check_zero = 0;
}
