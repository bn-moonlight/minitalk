/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:00:11 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 09:26:04 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/libft.h"

void	giden(int pid, char *str)
{
	int	zero;

	while (*str)
	{
		zero = 7;
		while (zero >= 0)
		{
			if (*str >> zero & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			zero--;
		}
		str++;
	}
}

int	main(int args, char **argv)
{
	int	pid;

	if (args == 3)
	{
		pid = ft_atoi(argv[1]);
		giden(pid, argv[2]);
	}
	return (0);
}
