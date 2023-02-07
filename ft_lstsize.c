/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:54:48 by apple             #+#    #+#             */
/*   Updated: 2023/02/06 18:32:02 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
int	ft_lstsize(t_list *lst)
{
	int		idx;
	t_list	*position;

	idx = 0;
	position = lst;
	while (position != NULL)
	{
		position = position->next;
		idx++;
	}
	return (idx);
}