/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 15:20:20 by keulee            #+#    #+#             */
/*   Updated: 2020/07/13 17:48:21 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    ft_info_u(t_struct *tab)
{
    tab->u_number = (unsigned int)va_arg(tab->list, unsigned int);
    tab->string = ft_itoa_u(tab->u_number);
    tab->string_len = ft_strlen(tab->string);
    if (tab->check_minus == 1 && tab->check_zero == 1)
        tab->check_zero = 0;
    if (tab->check_precision == 1 && tab->check_zero == 1)
        tab->check_zero = 0;
    free(tab->string);
	free(tab->string);
}
