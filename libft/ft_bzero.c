/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:50:58 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:50:59 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *giren, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		((unsigned char *) giren)[a] = '\0';
		a++;
	}
	return (giren);
}
