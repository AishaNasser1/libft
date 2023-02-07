/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:50:24 by apple             #+#    #+#             */
/*   Updated: 2023/02/06 16:03:03 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		ptr = ft_strdup("");
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (ft_strlen(s) <= start + len)
		len = ft_strlen(s) - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// #include <stdio.h>
// #include <string.h>
// 	int main(void)
// 	{
// 		char c[] = "happy-me-forever";
// 		printf("%s", ft_substr(c, 10, 2));
// 		return (0);
// 	}