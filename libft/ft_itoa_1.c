/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:16:03 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/23 11:55:43 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t		i;
	long int	n_inv;
	char		*str;

	if (n == 0 || n == -0)
		return ("0\0");
	i = 0;
	n_inv = 0;
	while (n != 0)
	{
		n_inv = (n_inv * 10) + (n % 10);
		n = n / 10;
		i++;
	}
	if (n_inv < 0)
		n = 1;
	if (!(str = malloc((i + 1 + n) * sizeof(char))))
		return (NULL);
	i = 0;
	if (n == 1)
	{
		str[i] = '-';
		i++;
	}
	while (n_inv != 0)
	{
		if (n_inv < 0)
			str[i] = ((n_inv % 10) * (-1)) + '0';
		else
			str[i] = (n_inv % 10) + '0';
		n_inv = n_inv / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
