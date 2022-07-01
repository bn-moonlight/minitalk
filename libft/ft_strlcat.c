/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:39:13 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:39:15 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsizi)
{
	size_t	a;
	size_t	de;
	size_t	sr;

	de = ft_strlen(dest);
	sr = ft_strlen((char *)src);
	a = 0;
	if (dstsizi <= de)
		return (dstsizi + sr);
	while (src[a] != '\0' && de + a + 1 < dstsizi)
	{
		dest[de + a] = src[a];
		a++;
	}
	dest[de + a] = '\0';
	return (de + sr);
}
