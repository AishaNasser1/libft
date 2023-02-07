/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:46 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 13:04:18 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	position;

	if (*to_find == '\0')
		return ((char *)str);
	if (len == 0)
		return (0);
	position = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= position)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, position) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int	main(void) {
    char haystack[] = "Hello World";
    char needle[] = "World";
    int len = strlen(haystack);
    char *result = ft_strnstr(haystack, needle, len);
    if (result) 
{
printf("subst '%s' found  '%s' post:", needle, haystack, result - haystack);
    } else {
        printf("substring '%s' not found  '%s'\n", needle,haystack);
    }
    return (0);
}
 */