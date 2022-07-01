/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:55:08 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:55:09 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*k1;
	unsigned char	*k2;
	size_t			i;

	i = 0;
	k1 = (unsigned char *)s1;
	k2 = (unsigned char *)s2;
	while (n > i)
	{
		if (k1[i] != k2[i])
			return (k1[i] - k2[i]);
		i++;
	}
	return (0);
}
