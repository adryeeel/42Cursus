/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 23:50:12 by arocha-b          #+#    #+#             */
/*   Updated: 2024/02/20 03:35:56 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*buffer_get_line(const char *buffer)
{
	char	*nl_pos;
	char	*next_line;
	size_t	next_line_len;

	nl_pos = ft_strchr(buffer, '\n');
	if (!nl_pos)
		next_line_len = ft_strlen(buffer);
	else
		next_line_len = nl_pos - buffer + 1;
	next_line = ft_calloc(next_line_len + NULL_CHAR, sizeof(char));
	ft_memcpy(next_line, buffer, next_line_len);
	return (next_line);
}

static char	*buffer_remove_line(char *buffer)
{
	char	*nl_pos;
	char	*new_buffer;
	size_t	delete_size;
	size_t	new_buffer_len;

	nl_pos = ft_strchr(buffer, '\n');
	if (!nl_pos)
		delete_size = ft_strlen(buffer);
	else
		delete_size = nl_pos - buffer + 1;
	new_buffer_len = ft_strlen(buffer) - delete_size + NULL_CHAR;
	new_buffer = ft_calloc(new_buffer_len, sizeof(char));
	ft_memcpy(new_buffer, buffer + delete_size, new_buffer_len);
	free(buffer);
	return (new_buffer);
}

static char	*buffer_read(int fd, char *buffer)
{
	char			*read_buffer;
	int				read_bytes;

	read_buffer = ft_calloc(BUFFER_SIZE + NULL_CHAR, sizeof(char));
	while (!ft_strchr(read_buffer, '\n'))
	{
		read_bytes = read(fd, read_buffer, BUFFER_SIZE);
		if (read_bytes <= 0)
			break ;
		read_buffer[read_bytes] = '\0';
		buffer = strmcat(buffer, read_buffer);
	}
	free(read_buffer);
	if ((read_bytes < 0) || (read_bytes == 0 && !*buffer))
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*next_line;
	static char	*buffer;

	if (!buffer)
		buffer = ft_calloc(BUFFER_SIZE + NULL_CHAR, sizeof(char));
	buffer = buffer_read(fd, buffer);
	if (!buffer)
		return (NULL);
	next_line = buffer_get_line(buffer);
	buffer = buffer_remove_line(buffer);
	return (next_line);
}
