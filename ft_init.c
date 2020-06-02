/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:09:14 by keulee            #+#    #+#             */
/*   Updated: 2020/06/02 22:05:30 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
** Function to initialize structure before using it
*/
void    ft_init(t_struct *tab, const char *str)
{
    tab->i = 0;
    tab->j = 0;
    tab->str = str;
    tab->check_width = 0;
    tab->check_s_width = 0;
    tab->check_minus = 0;
    tab->check_precision = 0;
    tab->check_zero = 0;
    tab->width = 0;
    tab->len = 0;
    tab->string_len = 0;
    tab->precision = 0;
    tab->index = 0;
    tab->specifier = '\0';
    tab->string = NULL;
}
