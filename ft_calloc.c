/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:50:06 by anasser           #+#    #+#             */
/*   Updated: 2023/02/06 16:27:35 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && SIZE_MAX / size < count)
		return (NULL);
	ptr = (void *)malloc(size * count);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/* #include<stdio.h>
#include <string.h>
int	main(void)
 {
    int count = 5;
    int size = sizeof(int);
    int *arr = ft_calloc(count, size);
    if (arr)
	{
        for (int i = 0; i < count; i++)
			{
            printf("%d ", arr[i]);
        }
        free(arr);
    }
    return (0);
}
 */