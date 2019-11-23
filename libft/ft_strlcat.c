/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:43:14 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/20 16:20:14 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	size_t srclen;
	size_t dstlen;

	srclen = 0;
	while (src[srclen])
		srclen++;
	dstlen = 0;
	while (dst[dstlen] && dstlen < maxlen)
		dstlen++;
	if (dstlen == maxlen)
		return (maxlen + srclen);
	if (srclen < (maxlen - dstlen))
		ft_memcpy(dst + dstlen, (void*)src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, (void*)src, maxlen - 1);
		dst[dstlen + maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}
