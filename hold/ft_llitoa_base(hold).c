/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base(hold).c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 15:16:33 by keulee            #+#    #+#             */
/*   Updated: 2020/05/29 20:31:00 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_rev(char *string)
{
	int		len;
	int		i;
	char	tmp;

	len = ft_strlen(string) - 1;
	i = 0;
	while (i < len)
	{
		tmp = string[i];
		string[i] = string[len];
		string[len] = tmp;
		i++;
		len--;
	}
	return (string);
}

void	ft_manage(long long int *nb, char **string, int *sign, int *i)
{
	if (*nb == 0)
		(*string)[0] = '0';
	if (*nb < 0)
	{
		*nb *= -1;
		*sign = -1;
	}
	if ((*string)[0] == '0')
		*i = 1;
	else
		*i = 0;
}

unsigned int	ft_nb_len(long long int *nb, int *div)
{
	unsigned int		i;
	long long int		l_nb;

	i = 0;
	l_nb = *nb;
	if (l_nb < 0)
	{
		l_nb *= -1;
		i = 1;
	}
	while (l_nb)
	{
		l_nb /= *div;
		i++;
	}
	return (i);
}
//
// char	*ft_manage_overflow(long long int *nb, unsigned int *nb_len, int *div)
// {
// 	char	*string;
//
// 	if (*div == 16 && *nb == -9223372036854775808)
// 	{
// 		if (!(string = (char *)malloc(sizeof(char) * (*nb_len + 1))))
// 			return (NULL);
// 		string = ft_strcpy(string, "8000000000000000");
// 		return (string);
// 	}
// 	return (NULL);
// }

char	*ft_itoa_base(long long int nb, char *base)
{
	char		*string;
	int			div;
	int			i;
	int			sign;
	unsigned int nb_len;

	div = ft_strlen(base);
	sign = 1;
	nb_len = ft_nb_len(&nb, &div);
	// if (div == 16 && nb == -9223372036854775808)
	// 	return (ft_manage_overflow(&nb, &nb_len, &div));
	if (div != 16 || !(string = (char *)malloc(sizeof(char) * (nb_len + 1))))
		return (NULL);
	ft_manage(&nb, &string, &sign, &i);
	while (nb > 0)
	{
		string[i++] = base[nb % div];
		nb = nb / div;
	}
	if (sign == -1)
		string[i++] = '-';
	string[i] = '\0';
	string = ft_rev(string);
	return (string);
}
