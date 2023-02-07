/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:49:52 by anasser           #+#    #+#             */
/*   Updated: 2023/01/19 16:02:30 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

// #include<stdio.h>
// int main() 
// {
//     printf("%c", ft_tolower('A')); // prints 'a'
//     printf("%c", ft_tolower('a')); // prints 'a'
//     printf("%c", ft_tolower('z')); // prints 'z'
//     printf("%c", ft_tolower('L')); // prints 'L'
//     printf("%c", ft_tolower('1')); // prints '1'
//     return (0);
// }
