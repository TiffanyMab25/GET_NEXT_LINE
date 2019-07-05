/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 11:24:43 by tmabunda          #+#    #+#             */
/*   Updated: 2019/07/05 12:57:56 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	find_newline(char **line, char **str)
{
	char	*temp;
	char	*str1;
	char	*c;

	temp = *str;
	str1 = *str;
	c = ft_strchr(temp, '\n');
	*line = ft_strsub(temp, 0, c - temp);
	while (*temp)
		temp++;
	c++;
	*str = ft_strsub(str1, c - temp, temp - c);
	free(temp);
	return (1);
}

int			ft_readline(char **line, char **str)
{
	if (*str && ft_strlen(**str) > 0)
	{
		*line = *str;
		*str = NULL;
		return (1);
	}
	else
		return (0);
}

int			get_next_line(const int fd, char **line)
{
	char			buffer[BUFF_SIZE + 1];
	char			*temp;
	int				i;
	static	char	*str[100];

	if (line && fd >= 0 && read(fd, buffer, 0) == 0)
	{
		if (str[fd] != NULL && ft_strchr(str[fd], '\n'))
			return (find_newline(line, &str[fd]));
		while ((i = read(fd, buffer, BUFF_SIZE)) > 0)
		{
			if (str[fd] == NULL)
				str[fd] = ft_strdup("");
			buffer[i] = '\0';
			temp = str[fd];
			str[fd] = ft_strjoin(temp, buffer);
			free(temp);
			if (ft_strchr(str[fd], '\n') != NULL)
				return (find_newline(line, &str[fd]));
		}
		return (ft_readline(line, &str[fd]));
	}
	return (-1);
}
