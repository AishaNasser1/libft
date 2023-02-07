/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:03:35 by apple             #+#    #+#             */
/*   Updated: 2023/02/06 18:32:13 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		if (*((unsigned char *)s1 + c) == *((unsigned char *)s2 + c))
		{
			c++;
		}
		else
		{
			return ((*((unsigned char *)s1 + c)) - *((unsigned char *)s2 + c));
		}
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	char s1[20] = "abcdefghiddr";
	char s2[20] = "abcdefghibdr";
	printf("ft_memcmp result: %d\n", ft_memcmp(s1, s2, 10));
	printf("memcmp result: %d\n", memcmp(s1, s2, 10)); 
	return (0);
} */
