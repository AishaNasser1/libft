/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:32 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 18:33:05 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> */

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		l;
	int		i;

	l = 0;
	while (s1[l] != '\0')
	{
		l++;
	}
	dest = (char *)malloc(sizeof(char) * (l + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char	p[10]= "aisha";
// 	char	*p1;
// 	p1 = ft_strdup(p);
// 	printf("%s\n", p1);
// 	return (0);
// }