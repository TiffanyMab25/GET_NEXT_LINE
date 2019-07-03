/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 11:24:43 by tmabunda          #+#    #+#             */
/*   Updated: 2019/07/03 16:31:02 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_readline(char **line, char *str)
{
if (*str && ft_strlen(*str) > 0)
	*line = *str;
	*str = NULL;
	return (1);
	else
		return (0);
}

int		search_newline(char **line , char *str)
{
	char *temp1;
	char temp2;
	char c;

	temp1 = str1;
	temp2 = str2;
	c = ft_strchar(temp1, '\n');
