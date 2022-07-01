/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:47:38 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:47:39 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my;

	my = malloc(sizeof(t_list));
	if (!my)
		return (0);
	my -> content = content;
	my -> next = NULL;
	return (my);
}
