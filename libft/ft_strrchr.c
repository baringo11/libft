/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:45:28 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/15 14:01:44 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			p = (char*)&s[i];
		i++;
	}
	if (s[i] == '\0' && s[i] == c)
		p = (char*)&s[i];
	if (p == NULL)
		return (NULL);
	else
		return (p);
}
