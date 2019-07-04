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
**  It checks if there another string or its the end of the file
** if the string is empty it must return 1
** If the string len is > 0 it must return 0
*/
int		ft_readline(char **line, char *str)
{
	if(str && ft_strlen(str) > 0)
	{
		*line = str;
		str = NULL;
		return(1);
	}
	else
		return (0);
}

static int	find_newline(char **line, char *str)
{
	char	*temp;
	char	*str1;
	char	*c;

	temp = *str;
	str1 = *str;
	c = ft_strchr(temp. '\n');
	*line = ft_strsub(temp, 0, c - temp);
	while (*temp)
		temp++;
	c++;
	*str = ft_strsub(str1, c - temp, temp - c);
	free(temp);
	return(1);

}

int		get_next_line(const int, int fd, char **line)
{
	char		buffer[BUFF_SIZE + 1];
	char		*temp;
	int		i;
	static	char	*str[100];


	



