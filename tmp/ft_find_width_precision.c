/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_width_precision.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 22:10:38 by keulee            #+#    #+#             */
/*   Updated: 2020/06/22 18:47:45 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_find_width_precision(t_struct *tab)
{
    if (tab->str[tab->i-1] == '.')
    {
        tab->check_precision = 1;
        while (tab->str[tab->i] >= '0' && tab->str[tab->i] <= '9')
        {
            tab->precision = tab->precision * 10 + tab->str[tab->i] - '0';
            tab->i++;
        }
    }
    else
    {
        tab->check_width = 1;
        while (tab->str[tab->i] >= '0' && tab->str[tab->i] <= '9')
        {
            tab->width = tab->width * 10 + tab->str[tab->i] - '0';
            tab->i++;
        }
    }
}
