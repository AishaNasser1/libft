/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:21 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 18:32:22 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     char src[20] = "Hello World!";
//     char dst[20] = "Goodbye happy";
//     printf("Original destination string: %s\n", dst);
//     ft_memmove(dst, src, strlen(src) + 1);
//     printf("After memmove: %s\n", dst);
//     return (0);
// }