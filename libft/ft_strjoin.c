/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:39:31 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:39:32 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char *s2)
{
	size_t	a;
	size_t	b;
	size_t	t;
	size_t	i;
	char	*g;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	t = a + b;
	i = 0;
	g = malloc(t + 1);
	if (!g)
		return (NULL);
	while (a > i)
	{
		g[i] = s1[i];
		i++;
	}
	a = 0;
	while (b > a)
		g[i++] = s2[a++];
	g[i] = '\0';
	return (g);
}
