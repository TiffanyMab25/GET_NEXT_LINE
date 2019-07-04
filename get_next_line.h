/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 07:45:43 by tmabunda          #+#    #+#             */
/*   Updated: 2019/07/04 10:14:06 by tmabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 100
#include "libft/libft.h"
#include <unistd.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <stdlib.h>


int		get_next_line(const int fd, char **line);

#endif
