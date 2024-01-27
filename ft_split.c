/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoutaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:03:54 by asoutaie          #+#    #+#             */
/*   Updated: 2024/01/24 21:15:36 by asoutaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	**free_split(char **str, int i)
{
	while (i >= 0)
		free(str[i--]);
	free(str);
	return (NULL);
}

static int	get_word_size(char const *s, char c)
{
	int	size_len;

	size_len = 0;
	while (s[size_len] != c && s[size_len] != '\0')
		size_len++;
	return (size_len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		wsize;
	int		i;

	if (s == NULL)
		return (NULL);
	str = (char **) ft_calloc(sizeof(char *), count_words(s, c) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		wsize = get_word_size(s, c);
		if (wsize > 0)
		{
			str[i++] = ft_substr(s, 0, wsize);
			if (str[i - 1] == NULL)
				return (free_split(str, i - 1));
			s = s + wsize;
		}
	}
	str[i] = NULL;
	return (str);
}
