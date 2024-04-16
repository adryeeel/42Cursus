/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:41:28 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/15 15:18:06 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void sig_handler(int signum, siginfo_t *info, void *context)
{
	static int i;
	static char c;
	
	(void)context;

	ft_btoc(signum, &c);

	if (++i == 8)
	{
		if (c == '\0')
		{
			ft_printf("\n");
			kill(info->si_pid, SIGUSR2);
			c = 0;
			i = 0;
			return;
		}
		ft_printf("%c", c);
		c = 0;
		i = 0;
	}
	kill(info->si_pid, SIGUSR1);
}

int main(void)
{
	ft_init_signal(SIGUSR1, sig_handler);
	ft_init_signal(SIGUSR2, sig_handler);
	ft_printf("%d\n", getpid());

	while (1)
		pause();

	return (0);
}
