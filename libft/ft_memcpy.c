/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:44:51 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:44:53 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *gelen, const void *in, size_t b)
{
	size_t	i;

	i = 0;
	if (!gelen && !in)
		return (NULL);
	while (i < b)
	{
		((unsigned char *)gelen)[i] = ((unsigned char *)in)[i];
		i++;
	}
	return (gelen);
}
