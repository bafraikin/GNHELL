/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bafraiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:04:28 by bafraiki          #+#    #+#             */
/*   Updated: 2018/11/16 14:42:07 by bafraiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

int	get_next_line(const int fd,char **line);

typedef struct		s_fdline {

	int			fd;
	char		*rest;
	t_fdline	*next;

}					t_fdline;

#endif
