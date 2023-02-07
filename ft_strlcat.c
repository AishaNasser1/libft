/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:37 by anasser           #+#    #+#             */
/*   Updated: 2023/02/07 18:09:06 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	idx;
	size_t	src_idx;
	size_t	value;

	if (!dest || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dest))
		value = ft_strlen(src) + size;
	else
		value = ft_strlen(src) + ft_strlen(dest);
	idx = 0;
	while (dest[idx] != '\0')
		idx++;
	src_idx = 0;
	while (src[src_idx] != '\0' && idx + 1 < size)
	{
		dest[idx] = src[src_idx];
		src_idx++;
		idx++;
	}
	dest[idx] = '\0';
	return (value);
}
/* 
#include <stdio.h>

int	main(void)
 {
	char src[20] = "Hello World!";
	char dst[20] = "Goodbye ";
	size_t size = 15;
	printf("Original destination string: %s\n", dst);
	size_t len = ft_strlcat(dst, src, size);
	printf("After strlcat: %s\n", dst);
	printf("Length of final string: %lu\n", len);
	return (0);
} */