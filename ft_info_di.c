/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 11:36:32 by keulee            #+#    #+#             */
/*   Updated: 2020/07/03 11:42:44 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
