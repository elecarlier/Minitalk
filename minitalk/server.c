/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarlier <ecarlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:14:29 by ecarlier          #+#    #+#             */
/*   Updated: 2024/01/25 16:55:28 by ecarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

/*
void	signal_handler(int signum)
{
	if (signum == SIGUSR1)
		//;
}
*/


int	serv(void)
{
	pid_t	pid;

	pid = getpid();
	ft_printf("The process ID is %d\n", pid);
	while (1)
	{
		usleep(50);
	}
	return (0);
}
