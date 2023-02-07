/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:29 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 18:32:59 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int b)
{
	while (*str != '\0')
	{
		if (*str == (unsigned char)b)
			return ((char *)str);
		str++;
	}
	if (b == '\0')
		return ((char *)str);
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *string = "Welcomew";
	char search_char = 'W';
	char *result;

	result = strchr(string, search_char);

	if (result)
		printf("'%c' in '%s' at position %ld\n", search_char, string, result
				- string);
	else
		printf("Character '%c' not found in '%s'\n", search_char, string);

	return (0);
} */