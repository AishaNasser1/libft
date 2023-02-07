/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:00 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 18:32:06 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
// #include<string.h>
// #include<stdio.h>
// int main(void)
// {
//     char str[] = "Hello World";
//     char c = 'o';
//     int len = strlen(str);
//     void *result = ft_memchr(str, c, len);
//     if (result) {
//         printf("Character '%c' found in the string '%s' at position: %ld\n",
		//c, str, (char *)result - str);
//     } else {
//         printf("Character '%c' not found in the string '%s'\n", c, str);
//     }
//     return (0);
// }
