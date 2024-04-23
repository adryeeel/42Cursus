/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:41:30 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/23 21:04:44 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

static int g_sigsrv;

bool ft_await(size_t cycles)
{
	size_t i;

	i = 0;
	while (g_sigsrv == 0)
	{
		if (i == cycles)
		{
			ft_putstr_fd("No response from server.", STDERR_FILENO);
			return (false);
		}
		i++;
		usleep(10);
	}
	g_sigsrv = 0;
	return (true);
}

void sig_handler(int signum, siginfo_t *info, void *context)
{
	static size_t i;

	(void)info;
	(void)context;
	g_sigsrv = 1;
	if (signum == SIGUSR1)
		i++;
	else if (signum == SIGUSR2)
		ft_printf("Bytes read: %d\n", (i + 1) / 8);
}

int main(int argc, char const *argv[])
{
	pid_t pid;
	size_t len;
	const char *msg;

	if (argc <= 2 || argc >= 4)
		return (0);
	msg = argv[2];
	pid = ft_atoi(argv[1]);
	len = ft_strlen(msg) + 1;
	ft_init_signal(SIGUSR1, sig_handler);
	ft_init_signal(SIGUSR2, sig_handler);
	while (len-- > 0)
		ft_send_char(pid, *msg++);
	return (0);
}
