/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:15 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 18:32:17 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	c;

	if (dst == src || !n)
	{
		return (dst);
	}
	c = 0;
	while (c < n)
	{
		*((char *)dst + c) = *((char *)src + c);
		c++;
	}
	return (dst);
}
/* 

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[5];
	char	dest[1];

	src[5] = "Hello";
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("%s\n", dest);
	return (0);
}
 */