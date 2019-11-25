/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaringo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 15:12:49 by jbaringo          #+#    #+#             */
/*   Updated: 2019/11/25 11:47:46 by jbaringo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isspace(char str, char c)
{
	if (str == c)
		return (0);
	else
		return (1);
}

int			count_words(char *str, char c)
{
	int		count;

	count = 0;
	while (*str)
	{
		
		/* move to the beggining of a new word*/

		while (*str && ft_isspace(*str, c) == 0)
			str++;
		if (*str && ft_isspace(*str, c) == 1)
		{
			count++;
			/*move to the next whitespace*/
			while (*str && ft_isspace(*str, c) == 1)
				str++;
		}
	}
	return (count);
}

char		*malloc_word(char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && ft_isspace(str[i], c) == 1)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && ft_isspace(str[i], c) == 1)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_split(char *s, char c)
{
	char	**arr;
	int		i;

	if (!(arr = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return NULL;
	/*same as count_words, except we save word to array instead of counting*/
	i = 0;
	while (*s)
	{
		/* move to the beggining of a new word */
		while (*s && ft_isspace(*s, c) == 0)
			s++;
		if (*s && ft_isspace(*s, c) == 1)
		{
			/* save word to array */
			arr[i] = malloc_word(s, c);
			i++;
			/* move to the next whitespace */
			while (*s && ft_isspace(*s, c) == 1)
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
