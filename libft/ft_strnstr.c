/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:37:57 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:37:58 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*k1;
	char	*k2;
	size_t	i;
	int		a;

	i = 0;
	a = 0;
	k1 = (char *)haystack;
	k2 = (char *)needle;
	if (k2[i] == '\0')
		return (k1);
	while (k1[i] != '\0' && i < len)
	{
		while (k1[i] == k2[a] && i + 1 <= len)
		{
			if (k2[a + 1] == '\0')
				return (&k1[i - a]);
			a++;
			i++;
		}
		i = i - a;
		a = 0;
		i++;
	}
	return (0);
}
