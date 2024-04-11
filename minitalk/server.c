/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:18:09 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/11 16:52:39 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _XOPEN_SOURCE 700

#include <signal.h>
#include <unistd.h>
#include <stdio.h>

void sig_handler(int signum, siginfo_t *info, void *context)
{
	(void)info;
	(void)context;

	if (signum == SIGUSR1)
		printf("Signal received: %d\n", signum);
}

int main(void)
{
	struct sigaction sa;

	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = sig_handler;
	sigaction(SIGUSR1, &sa, NULL);

	printf("%d\n", getpid());

	while (1)
		pause();
	return (0);
}
