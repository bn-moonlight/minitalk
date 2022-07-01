/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:45:07 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:45:09 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *gelen, const void *in, size_t b)
{
	if (!gelen && !in)
		return (NULL);
	if (gelen < in)
		ft_memcpy (gelen, in, b);
	else if (gelen > in)
	{
		while (b--)
			*((unsigned char *)(gelen + b)) = *((unsigned char *)(in + b));
	}
	return (gelen);
}
