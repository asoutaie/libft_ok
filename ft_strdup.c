/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoutaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:31:30 by asoutaie          #+#    #+#             */
/*   Updated: 2024/01/16 20:56:58 by asoutaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	char	*new_str;
	size_t	i;

	length = ft_strlen(s);
	new_str = (char *)malloc(length + 1);
	i = 0;
	if (new_str == NULL)
	{
		return (NULL);
	}
	while (i <= length)
	{
		new_str[i] = s[i];
		i++;
	}
	return ((char *)new_str);
}
