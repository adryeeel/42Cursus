/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:14:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:53:35 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# define _XOPEN_SOURCE 600

# include "libft/libft.h"
# include <signal.h>
# include <stdbool.h>

typedef void	t_ft_handler(int, siginfo_t *, void *);

bool			ft_await(size_t cycles);
void			ft_btoc(int signum, char *c);
void			ft_send_char(pid_t pid, char c);
void			ft_init_signal(int sig, t_ft_handler *sig_handler);

#endif
