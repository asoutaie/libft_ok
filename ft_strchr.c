/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoutaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:47:11 by asoutaie          #+#    #+#             */
/*   Updated: 2024/01/14 19:31:27 by asoutaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == '\0' && (unsigned char)c != '\0')
	{
		return (NULL);
	}
	return ((char *)&s[i]);
}
