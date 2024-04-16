/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:14:46 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 17:34:56 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

#define _XOPEN_SOURCE 600

#include <signal.h>
#include <stdbool.h>

#include "libft/libft.h"

typedef void ft_handler(int, siginfo_t *, void *);

bool ft_await(size_t cycles);
void ft_btoc(int signum, char *c);
void ft_send_char(pid_t pid, char c);
void ft_init_signal(int sig, ft_handler *sig_handler);

#endif
