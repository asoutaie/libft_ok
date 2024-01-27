/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoutaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:38:58 by asoutaie          #+#    #+#             */
/*   Updated: 2024/01/21 17:51:25 by asoutaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (s1 == NULL || *s1 == '\0')
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
	{
		start++;
	}
	end = ft_strlen(s1) - 1;
	while (end >= start && ft_strchr(set, s1[end]) != NULL)
	{
		end--;
	}
	len = end - start + 1;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s1 + start, len);
	str[len] = '\0';
	return (str);
}
