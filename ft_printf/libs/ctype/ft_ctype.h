/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctype.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:49:19 by arocha-b          #+#    #+#             */
/*   Updated: 2023/10/18 15:27:59 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isblank(int c);
int	ft_iscntrl(int c);
int	ft_isdigit(int c);
int	ft_islower(int c);
int	ft_isprint(int c);
int	ft_isspace(int c);
int	ft_isupper(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isxdigit(int c);

#endif
