/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:25:48 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/15 13:02:47 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char*)dst;
	src1 = (unsigned char*)src;
	i = 0;
	if (src == dst || len == 0)
		return (dst);
	if (dst1 > src1)
	{
		while (i++ < len)
			dst1[len - i] = src1[len - i];
	}
	else
	{
		while (len--)
			*(dst1++) = *(src1++);
	}
	return (dst);
}
