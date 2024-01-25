/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecarlier <ecarlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:23:15 by ecarlier          #+#    #+#             */
/*   Updated: 2024/01/25 16:47:55 by ecarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_error(void);
void	send_signal(int pid, char c);

/* ./client <server_pid> <message> */
int	main(int argc, char *argv[])
{
	int	server_id;
	int	i;
	char		*msg;

	i = 0;
	if (argc == 3)
	{
		server_id = ft_atoi(argv[1]);
		msg = argv[2];
		if (!server_id || msg[0] == 0)
		{
			print_error();
			return (0);
		}
		while (++msg[i])
			send_signal(server_id, msg[i]);
	}
	else
		print_error();
	return (0);
}

void	print_error(void)
{
	ft_printf("[ERROR] You should have 2 arguments only \n");
	ft_printf("The argument should be in this form <server_pid> <message> \n");
}

/* (n & 1) effectue l'operation logique ET
	bit a bit avec le bit de poids FAIBLE
	n >> 1 decalage par la droite */
void	send_signal(int pid, char c)
{
	int	array[8];
	int	n;
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (n == 0 || (n & 1) == 0)
			array[i] = 0;
		else if ((n & 1) == 1)
			array[i] = 1;
		if (n > 0)
			n = n >> 1;
		i--;
	}
	while (++i < 8)
	{
		if (array[i] == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(200);
	}
}
