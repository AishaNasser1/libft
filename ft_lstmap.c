/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:58:36 by apple             #+#    #+#             */
/*   Updated: 2023/02/07 12:41:25 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_lst;
	t_list		*position_new;
	t_list		*position_old;

	new_lst = ft_lstnew((*f)(lst->content));
	if (!lst || !(new_lst))
		return (NULL);
	position_new = new_lst;
	position_old = lst->next;
	while (position_old)
	{
		position_new->next = ft_lstnew((*f)(position_old->content));
		if (!(position_new->next))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		position_new = position_new->next;
		position_old = position_old->next;
	}
	return (new_lst);
}
