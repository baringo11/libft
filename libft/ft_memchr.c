/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:14:56 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/13 11:46:01 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	p = (char*)s;
	i = 0;
	while (i < (n - 1) && p[i] != c)
		i++;
	if (p[i] == c)
		return (&p[i]);
	else
		return (NULL);
}
