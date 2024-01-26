/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarlier <ecarlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:14:29 by ecarlier          #+#    #+#             */
/*   Updated: 2024/01/26 16:33:42 by ecarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

/*
void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
		//;
}
*/


int	main(void)
{
	pid_t	pid;
	struct sigaction	s_sigaction;


	pid = getpid();
	ft_printf("The process ID is %d\n", pid);

	while (1)
	{
		usleep(50);
	}
	return (0);
}
