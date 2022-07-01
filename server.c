/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:02:06 by sakkaya           #+#    #+#             */
/*   Updated: 2022/07/01 10:31:30 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/libft.h"
#include "stdio.h"

void	gelen(int sig)
{
	static unsigned char	x;
	static int				i;

	if (sig == SIGUSR1)
		x = x | 1;
	i++;
	if (i == 8)
	{
		ft_putchar_fd(x, 1);
		x = 0;
		i = 0;
	}
	x = x << 1;
}

int	main(void)
{
	ft_putstr_fd("server PID:", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	signal(SIGUSR1, gelen);
	signal(SIGUSR2, gelen);
	while (1)
		pause();
	return (0);
}
