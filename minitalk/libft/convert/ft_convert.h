/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 22:11:30 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/16 14:16:36 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERT_H
# define FT_CONVERT_H

# include "../mem/ft_mem.h"
# include <stdlib.h>

int		*ft_ctob(char c);
char	*ft_itoa(long n);
int		ft_atoi(const char *nptr);
char	*ft_xtoa(unsigned long num);
size_t	ft_nbrlen(long nbr, int base);

#endif
