/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:40:03 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:40:05 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*p;
	int		i;
	int		e;

	e = 0;
	i = ft_strlen (src);
	p = (char *) malloc(i + 1);
	if (p == NULL)
		return (NULL);
	while (src[e] != '\0')
	{
		p[e] = src[e];
		e++;
	}
	p[i] = '\0';
	return (p);
}
