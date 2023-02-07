/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:57:07 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 17:57:10 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	idx;

	idx = ft_strlen((char *)str) + 1;
	while (idx--)
	{
		if (*(str + idx) == (unsigned char)c)
			return ((char *)(str + idx));
	}
	return (0);
}

/* #include <stdio.h>
    int main(void)
{
	const char	*str;
	char		c;
	char		*result;

    str = "Hello, World!";
    c = 'o';
    result = ft_strrchr(str, c);
    if (result) {
        printf("last occurrence '%c' in '%s' is at index %ld\n", c, str, result
		- str);
    } else {
        printf("The character '%c' was not found in the string '%s'\n", c, str);
    }
    return (0);
}
 */
