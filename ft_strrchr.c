/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoutaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:46:16 by asoutaie          #+#    #+#             */
/*   Updated: 2024/01/14 19:39:19 by asoutaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != (unsigned char)c && i >= 0)
	{
		i--;
	}
	if (s[i] != (unsigned char)c)
	{
		return (NULL);
	}
	return ((char *)&s[i]);
}
