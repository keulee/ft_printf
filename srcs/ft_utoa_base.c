/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 17:39:54 by keulee            #+#    #+#             */
/*   Updated: 2020/07/10 23:02:28 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*ft_addchar(char *str, int nb)
{
	char	*tmp;
	int		i;

	tmp = str;
	i = 0;
	while (str[i] != '\0')
		i++;
	str = (char*)malloc(sizeof(*str) * (i + 2));
	i = 0;
	str[i] = (nb > 9) ? nb + 55 : nb + 48;
	while (tmp[i] != '\0')
	{
		str[i + 1] = tmp[i];
		i++;
	}
	str[i + 1] = '\0';
	free(tmp);
	return (str);
}

char		*ft_utoa_base(unsigned long long value, char *b)
{
	char				*str;
	unsigned long long	base;

	base = ft_strlen(b);
	if (base < 2 || base > 16)
		return (NULL);
	str = (char*)malloc(sizeof(*str) * 1);
	str[0] = '\0';
	while (value / base > 0)
	{
		str = ft_addchar(str, value % base);
		value = value / base;
	}
	str = ft_addchar(str, value);
	return (str);
}
