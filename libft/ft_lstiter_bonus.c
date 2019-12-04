/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 13:47:01 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/26 13:54:58 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *begin;

	begin = lst;
	if (lst)
	{
		while (lst)
		{
			begin = lst->next;
			f((lst)->content);
			lst = begin;
		}
	}
}
