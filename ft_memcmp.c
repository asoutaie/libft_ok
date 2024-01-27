/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoutaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:38:33 by asoutaie          #+#    #+#             */
/*   Updated: 2024/01/14 19:40:43 by asoutaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*ps1;
	unsigned const char	*ps2;
	size_t				i;

	ps1 = s1;
	ps2 = s2;
	i = 0;
	if (ps1 == NULL && ps2 == NULL)
	{
		return (0);
	}
	while (i < n)
	{
		if (ps1[i] != ps2[i])
		{
			return (ps1[i] - ps2[i]);
		}
		i++;
	}
	return (0);
}
