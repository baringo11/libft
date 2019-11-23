/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:47:34 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/20 16:54:34 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	j = 0;
	i = 0;
	while (i < len && s2[0] != '\0')
	{
		if (s1[i] != s2[j])
			i++;
		else
		{
			ret = (char*)&s1[i];
			while (s2[j])
			{
				if (s2[j++] == s1[i] && i < len)
					i++;
				else
					return (NULL);
			}
			return (ret);
		}
	}
	if (i >= len && len != 0)
		return (NULL);
	return ((char*)s1);
}
