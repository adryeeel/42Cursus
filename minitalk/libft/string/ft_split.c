/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:25:26 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/13 22:23:02 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static size_t	ft_count_words(const char *s, char delimiter)
{
	size_t	words_counter;

	words_counter = 0;
	while (*s)
	{
		while (*s == delimiter)
			s++;
		if (*s && *s != delimiter)
			words_counter++;
		while (*s && *s != delimiter)
			s++;
	}
	return (words_counter);
}

static char	*ft_strdup_delimiter(const char *str, char delimiter)
{
	size_t	i;
	char	*newstr;
	size_t	newstr_len;

	i = 0;
	newstr_len = 0;
	while (str[i] && str[i] != delimiter)
	{
		i++;
		newstr_len++;
	}
	newstr = (char *)malloc((newstr_len + NULL_CHAR) * sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	while (*str && *str != delimiter)
		newstr[i++] = *str++;
	newstr[i] = '\0';
	return (newstr);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	char	**words;
	size_t	words_amount;

	i = 0;
	words_amount = ft_count_words(s, c);
	words = (char **)malloc((words_amount + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			words[i++] = ft_strdup_delimiter(s, c);
		while (*s && *s != c)
			s++;
	}
	words[i] = (char *)0;
	return (words);
}
