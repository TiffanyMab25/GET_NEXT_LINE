/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 11:24:43 by tmabunda          #+#    #+#             */
/*   Updated: 2019/07/04 15:45:43 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 **  It checks if the line has anything or not so it can be able to read it  
 **  If the str is empty return 1
 **  if the string isnt empty then return 0
 */
int			ft_readline(int fd,char **line)
{

	char *temp;
	char *str;
	int reader;
	static char *buffer[BUFF_SIZE + 1];
	if (fd < 0 || !line)
		return (-1);
	if (!(reader = read(fd, buffer, BUFF_SIZE)))
	{
		buffer[reader] = '\0';
		temp = ft_strjoin(str[fd], buffer);
		free(str[fd]);
		str[fd] = temp;
	}
	if (ft_strchr(str[fd], '\n') == '\n')
		break ;
	*line = ft_strdud(str[fd]);
		return (reader);
}

int		get_next_line(const int fd, char **line)
{

}
