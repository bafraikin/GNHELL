/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bafraiki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 16:54:54 by bafraiki          #+#    #+#             */
/*   Updated: 2018/11/16 20:40:01 by bafraiki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstadd(void *content, size_t content_size)
{
  t_list *new;

  if ((new = (t_list*)malloc(sizeof(t_list))) == NULL)
    return (NULL);
  new->content = content;
  new->content_size = content_size;
  new->next = NULL;
  return (new);
}
