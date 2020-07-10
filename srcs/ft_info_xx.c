/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_xx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:25:43 by k                 #+#    #+#             */
/*   Updated: 2020/07/10 23:00:31 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    ft_info_xx(t_struct *tab)
{
    tab->u_number = (unsigned int)va_arg(tab->list, unsigned int);
    tab->string = ft_utoa_base(tab->u_number, "0123456789ABCDEF");
    tab->string_len = ft_strlen(tab->string);
    if (tab->check_minus == 1 && tab->check_zero == 1)
        tab->check_zero = 0;
    if (tab->check_precision == 1 && tab->check_zero == 1)
        tab->check_zero = 0;
}
