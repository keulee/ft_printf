/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_sgl_caracter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: k <k@student.42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:09:24 by k                 #+#    #+#             */
/*   Updated: 2020/07/10 23:01:28 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    ft_print_sgl_caracter(t_struct *tab)
{
    ft_putchar(tab->str[tab->i]);
    tab->len++;
}
