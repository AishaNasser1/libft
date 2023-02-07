/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:32:11 by anasser           #+#    #+#             */
/*   Updated: 2023/02/07 16:41:26 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(int nbr)
{
	int	i;

	if (nbr < 0)
		i = 1;
	else
		i = 0;
	while (1)
	{
		nbr = nbr / 10;
		i++;
		if (nbr == 0)
			break ;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			length;
	char		*str;
	long long	nbr;

	nbr = n;
	length = count(nbr);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	str[length] = '\0';
	while (1)
	{
		str[length - 1] = nbr % 10 + '0';
		nbr /= 10;
		length--;
		if (nbr == 0)
			break ;
	}
	return (str);
}
