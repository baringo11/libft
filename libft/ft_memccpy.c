/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:36:39 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/15 10:46:28 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dst1;
	char	*src1;

	dst1 = dst;
	src1 = (char*)src;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)src1[i] != (unsigned char)c)
		{
			dst1[i] = src1[i];
			i++;
		}
		else
		{
			dst1[i] = src1[i];
			break ;
		}
	}
	if (i == n)
		return (NULL);
	else
		return (dst + (i + 1));
}
