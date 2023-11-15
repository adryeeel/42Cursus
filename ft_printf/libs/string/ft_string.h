/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:49:17 by arocha-b          #+#    #+#             */
/*   Updated: 2023/11/14 15:46:41 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# define NULL_CHAR 1
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *nptr);
char	*ft_strlowcase(char *str);
char	*ft_struppcase(char *str);
char	*ft_strdup(const char *str);
size_t	ft_strsize(const char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strcasecmp(char *s1, char *s2);
char	**ft_split(const char *s, char c);
char	*ft_strcapitalize(const char *str);
void	ft_puthex_fd(unsigned int n, int fd);
void	ft_putupphex_fd(unsigned int n, int fd);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	*strstr(const char *haystack, const char *needle);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*strcasestr(const char *haystack, const char *needle);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strcontains(const char *to_search, const char to_found);
char	*ft_strnstr(const char *big, const char *little, size_t len);

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putunbr_fd(unsigned int n, int fd);

#endif
