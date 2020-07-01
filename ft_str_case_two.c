/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_case_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 00:23:35 by keulee            #+#    #+#             */
/*   Updated: 2020/07/02 00:24:11 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_str_case_two(t_struct *tab)
{
    if (tab->precision < tab->string_len)
        tab->len += tab->precision;
    else
    {
        tab->len += tab->string_len;
        tab->precision = tab->string_len;
    }
    while (tab->index < tab->precision)
        ft_putchar(tab->string[tab->index++]);
}
