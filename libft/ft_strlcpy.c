/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:22:25 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/18 14:31:04 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	if (src == NULL && dst == NULL)
		return (0);
	i = 0;
	while (src[i])
		i++;
	j = 0;
	while (j < dstsize - 1 && src[j] && dstsize != 0)
	{
		dst[j] = src[j];
		j++;
	}
	if (dstsize != 0)
		dst[j] = '\0';
	return (i);
}
