/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:37 by anasser           #+#    #+#             */
/*   Updated: 2023/02/07 19:30:48 by anasser          ###   ########.fr       */
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
		return (ft_strlen(src) + size);
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

// #include <stdio.h>
// #include <string.h>
// int	main(void)
//  {
// 	char src[30] = "lorem ipsum dolor sit amet";
// 	char dst[20] = "01234567890123456790";

// 	char src2[30] = "lorem ipsum dolor sit amet";
// 	char dst2[20] = "01234567890123456790";

// 	size_t size = 15;
// 	printf("Original destination string: %s\n", dst);
// 	printf("Builtin - Original destination string: %s\n", dst2);

// 	size_t len = ft_strlcat(dst, src, size);
// 	size_t len2 = strlcat(dst2, src2, size);

// 	printf("After strlcat: %s\n", dst);
// 	printf("Builtin - After strlcat: %s\n", dst2);

// 	printf("Length of final string: %lu\n", len);
// 	printf("Builtin - Length of final string: %lu\n", len2);
// 	return (0);
// }