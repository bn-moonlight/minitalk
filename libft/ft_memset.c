/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:45:25 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:45:27 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *gelen, int a, size_t b)
{
	size_t	i;

	i = 0;
	while (i < b)
	{
		((unsigned char *)gelen)[i] = a;
		i++;
	}
	return (gelen);
}
