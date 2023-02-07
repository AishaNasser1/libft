/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:32:11 by anasser           #+#    #+#             */
/*   Updated: 2023/02/07 14:27:15 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		idx;
	int		size;
	char	tmp;

	size = ft_strlen(str);
	idx = 0;
	while (idx < (size / 2))
	{
		tmp = str[idx];
		str[idx] = str[size - idx - 1];
		str[size - idx - 1] = tmp;
		idx++;
	}
	return (str);
}

int	ft_intlen(int n)
{
	int			idx;
	long long	tmp;

	tmp = n;
	idx = 1;
	if (tmp < 0)
	{
		tmp = tmp * -1;
		idx++;
	}
	while (tmp >= 10)
	{
		tmp = tmp / 10;
		idx++;
	}
	return (idx);
}

char	*ft_itoa(int n)
{
	int				idx;
	int				is_negative;
	unsigned int	positive_n;
	char			*value;

	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		is_negative = 1;
		positive_n = -n;
	}
	else
	{
		is_negative = 0;
		positive_n = n;
	}
	value = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!value)
		return (NULL);
	ft_memset(value, '\0', (ft_intlen(n) + 1));
	idx = 0;
	while (positive_n != 0)
	{
		value[idx++] = (positive_n % 10) + '0';
		positive_n /= 10;
	}
	if (is_negative)
		value[idx++] = '-';
	return (ft_strrev(value));
}
