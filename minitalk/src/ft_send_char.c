/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:28:54 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:35:25 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_send_char(pid_t pid, char c)
{
	size_t	i;
	int		*bin;

	i = 0;
	bin = ft_ctob(c);
	while (bin[i] != -1)
	{
		if (!bin[i])
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i++;
		if (!ft_await(25))
		{
			free(bin);
			exit(EXIT_FAILURE);
		}
	}
	free(bin);
}
