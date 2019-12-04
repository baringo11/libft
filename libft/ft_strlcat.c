/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:43:14 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/25 16:12:40 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	i;
	size_t	n;
	size_t	ret;

	len_dst = 0;
	while (dst[len_dst] != '\0' && len_dst < size)
		len_dst++;
	if (size <= (len_dst + 1))
		return (len_dst + ft_strlen(src));
	n = ft_strlen(dst);
	ret = n + ft_strlen(src);
	i = 0;
	while (src[i] != '\0')
	{
		if (n < size - 1)
		{
			dst[n] = src[i];
			n++;
		}
		i++;
	}
	dst[n] = '\0';
	return (ret);
}
