/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:14:10 by keulee            #+#    #+#             */
/*   Updated: 2020/07/10 23:02:16 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Description
// The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.
// The pointer may subsequently be used as an argument to the function free(3).
// If insufficient memory is available, NULL is returned and errno is set to ENOMEM.
//
#include "../includes/ft_printf.h"

char		*ft_strdup(const char *src)
{
	char	*copy;
	int		i;
	int		len;

	i = 0;
	copy = NULL;
	len = ft_strlen(src);
	if (!(copy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
