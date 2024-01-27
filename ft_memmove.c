/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoutaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:12:58 by asoutaie          #+#    #+#             */
/*   Updated: 2024/01/14 19:47:49 by asoutaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_dest = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (p_dest <= p_src)
	{
		ft_memcpy(p_dest, p_src, n);
		return (dst);
	}
	else
	{
		p_dest = p_dest + n - 1;
		p_src = p_src + n - 1;
		while (n--)
			*p_dest-- = *p_src--;
	}
	return (dst);
}
