/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 00:10:27 by keulee            #+#    #+#             */
/*   Updated: 2020/07/10 23:00:19 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void    ft_info_str(t_struct *tab)
{
    tab->string = va_arg(tab->list, char *);
    if (tab->string == NULL)
        tab->string = "(null)";
    tab->string_len = ft_strlen(tab->string);
}
