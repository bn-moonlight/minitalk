/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:38:18 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:38:19 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dizi;
	size_t	uz;
	size_t	i;

	if (!s || !f)
		return (0);
	uz = ft_strlen(s);
	i = 0;
	dizi = malloc(uz + 1);
	if (!dizi)
		return (0);
	while (i < uz)
	{
		dizi[i] = (*f)(i, s[i]);
		i++;
	}
	dizi[i] = '\0';
	return (dizi);
}
