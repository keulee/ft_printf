/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_precision_and_width.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 16:44:21 by keulee            #+#    #+#             */
/*   Updated: 2020/06/29 16:46:22 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_find_precision_and_width(t_struct *tab)
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
