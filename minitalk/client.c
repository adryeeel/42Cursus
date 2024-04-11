/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:18:15 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/11 16:41:36 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _XOPEN_SOURCE 700

#include <signal.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	pid_t srv_pid;

	if (argc <= 1 || argc >= 4)
		return (0);

	srv_pid = atoi(argv[1]);
	kill(srv_pid, SIGUSR1);

	return (0);
}
