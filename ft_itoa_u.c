/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 19:39:14 by keulee            #+#    #+#             */
/*   Updated: 2020/05/15 23:21:16 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_int_len_u(unsigned int n)
{
	int i;

	i = (n < 0 ? 1 : 0);
	if (n < 0)
		n = n * -1;
	if (n == 0)
		i = 1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_u(unsigned int n)
{
	int		i;
	char	*str;
	int		mark;

	mark = (n < 0 ? 1 : 0);
	i = ft_int_len_u(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	// if (n == -2147483648)
	// 	return (ft_strdup("-2147483648"));
	// if (n < 0)
	// 	n = n * -1;
	str[i] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i - 1] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	// if (mark == 1)
	// 	str[0] = '-';
	return (str);
}
