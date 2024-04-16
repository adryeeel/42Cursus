/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_signal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:15:40 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/15 15:04:45 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void ft_init_signal(int sig, ft_handler *sig_handler)
{
	struct sigaction sa;

	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = sig_handler;

	if (sigaction(sig, &sa, NULL) == -1)
	{
		ft_putstr_fd("sigaction: failed to set action.\n", STDERR_FILENO);
		exit(EXIT_FAILURE);
	}
}
