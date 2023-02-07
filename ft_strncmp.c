/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:33:48 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 18:33:52 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/* #include<stdio.h>

#include<string.h>
int main()

{
    char str1[] = "Hello";
    char str2[] = "Hello World";
    int n = 5;
    int result = strncmp(str1, str2, n);
    if (result == 0) {
        printf("The first %d characters of '%s' and '%s' are the same\n", n,
		str1, str2);
    } else if (result > 0) {
        printf("The first %d characters of '%s' is greater than the first
		%d characters of '%s'\n", n, str1, n, str2);
    } else {
        printf("The first %d characters of '%s' is less than the first
		%d characters of '%s'\n", n, str1, n, str2);
    }
    return (0);
}
 */