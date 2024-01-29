/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarlier <ecarlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:14:29 by ecarlier          #+#    #+#             */
/*   Updated: 2024/01/29 13:08:42 by ecarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <signal.h>


void	signal_handler(int signum, siginfo_t *info)
{
	static int	i;
	static __pid_t	client_pid;
	static unsigned char	c;

	c
}

int	main(void)
{
	__pid_t	pid;
	struct sigaction	s_sigaction;


	pid = getpid();
	ft_printf("The process ID is %d\n", pid);
	s_sigaction.sa_sigaction = signal_handler; //pointeur vers la fct
	s_sigaction.sa_flags = SA_SIGINFO; //utilise Siginfo pour les flags
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	while (1)
	{
		usleep(50);
	}
	return (0);
}
