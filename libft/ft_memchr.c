/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:14:56 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/27 14:43:25 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char*)s;
	i = 0;
	while (n--)
	{
		if (p[i] == (unsigned char)c)
			return (p + i);
		i++;
	}
	return (NULL);
}
