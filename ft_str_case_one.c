/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_case_one.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 00:20:32 by keulee            #+#    #+#             */
/*   Updated: 2020/07/02 00:21:27 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_str_case_one(t_struct *tab)
{
    if (tab->width == 0)
        ;
    if (tab->width <= tab->string_len)
    {
        tab->len += tab->string_len;
        ft_putstr(tab->string);
    }
    else
    {
        tab->width = tab->width - tab->string_len;
        tab->len += tab->width + tab->string_len;
        if (tab->check_minus == 0)
        {
            while (tab->width-- > 0)
                ft_putchar(' ');
            ft_putstr(tab->string);
        }
        else
        {
            ft_putstr(tab->string);
            while (tab->width-- > 0)
                ft_putchar(' ');
        }
    }
}
