/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:49:37 by anasser           #+#    #+#             */
/*   Updated: 2023/02/07 14:39:12 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == 0)
	{
		*lst = new;
		lst[0]->next = 0;
	}
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	if (!lst)
// 		return ;
// 	if (*lst == NULL)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	else
// 		ft_lstlast(*lst)->next = new;
// }
// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*t;

// 	if (!lst || !new)
// 		return ;
// 	if (*lst == NULL)
// 	{
// 		t = ft_lstlast(*lst);
// 		t->next = &*new;
// 	}
// 	else
// 		*lst = new;
// }

/* int	main(void)
{
	t_list	*lst;
	t_list	*new;
	int		data1;
	int		data2;
	int		data3;

	lst = NULL;
	data1 = 10;
	data2 = 20;
	data3 = 30;
	new = ft_lstnew(&data1);
	ft_lstadd_back(&lst, new);
	new = ft_lstnew(&data2);
	ft_lstadd_back(&lst, new);
	new = ft_lstnew(&data3);
	ft_lstadd_back(&lst, new);
	while (lst != NULL)
	{
		printf("%d\n", *((int *)lst->content));
		lst = lst->next;
	}
	return (0);
} */