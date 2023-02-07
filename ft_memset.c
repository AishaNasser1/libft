/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:26 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 18:32:26 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;
	unsigned char	cach;

	dst = b;
	cach = (unsigned char)c;
	while (len--)
		*dst++ = cach;
	return (b);
}
// #include <stdio.h>
// int main()
// {
// char str[50] = "Hello World";
// ft_memset(str, 'X', 3);
// printf("%s\n", str);
// return (0);
// }