/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:54 by anasser           #+#    #+#             */
/*   Updated: 2023/02/07 11:35:01 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}
// #include<stdio.h>
// int main ()
// {
//     printf("%c", ft_toupper('A')); // prints 'A'
//     printf("%c", ft_toupper('b')); // prints 'A'
//     printf("%c", ft_toupper('z')); // prints 'Z'
//     printf("%c", ft_toupper('l')); // prints 'Z'
//     printf("%c", ft_toupper('1')); // prints '1'
//     return (0);
// }
