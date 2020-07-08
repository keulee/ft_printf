/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_double_percent.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:02:36 by k                 #+#    #+#             */
/*   Updated: 2020/07/08 17:08:19 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print_double_percent(t_struct *tab)
{
    ft_putchar('%');
    tab->len++;
    tab->i++;
}