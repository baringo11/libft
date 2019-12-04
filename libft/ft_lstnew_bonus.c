/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 09:51:30 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/26 11:56:06 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*head;

	if (!(head = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	head->content = (void*)content;
	head->next = NULL;
	return (head);
}
