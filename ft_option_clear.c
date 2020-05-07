/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_option_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:09:21 by keulee            #+#    #+#             */
/*   Updated: 2020/05/07 13:09:22 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
** Function to clear find_option function
*/
void ft_option_clear(t_struct *tab)
{
    tab->check_minus = 0;
    tab->check_width = 0;
    tab->check_s_width = 0;
    tab->check_precision = 0;
    tab->check_precision = 0;
    tab->string_len = 0;
    tab->width = 0;
    tab->precision = 0;
    tab->index = 0;
}
