/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:37 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 18:33:24 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
	{
		dst[i] = '\0';
		while (src[i] != '\0')
			i++;
		return (i);
	}
	return (0);
}

/* #include<stdio.h>
int main(void) {
char src[20] = "Hello World!";
char dst[20] = "Goodbye happy";
size_t size = 5;
printf("Original destination string: %s\n", dst);
size_t len = ft_strlcpy(dst, src, size);
printf("After strlcpy: %s\n", dst);
printf("Length of src: %lu\n", len);
return 0;
} */
