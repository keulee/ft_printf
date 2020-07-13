/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_info_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:02:43 by keulee            #+#    #+#             */
/*   Updated: 2020/07/12 23:57:52 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	ft_info_p(t_struct *tab)
{
	tab->pointer = va_arg(tab->list, void *);
    tab->p_number = (unsigned long long)tab->pointer;
    tab->string = ft_utoa_base(tab->p_number, "0123456789abcdef");
    tab->string_len = ft_strlen(tab->string) + 2;
	free(tab->string);
}
