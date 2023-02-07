/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasser <anasser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:04:01 by apple             #+#    #+#             */
/*   Updated: 2023/02/06 19:18:34 by anasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		idx;
	int		idx_join;
	char	*join;
	int		s1_size;
	int		s2_size;	

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	join = malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (!s1 || !s2 || !join)
		return (NULL);
	idx = 0;
	idx_join = 0;
	while (s1[idx])
		join[idx_join++] = s1[idx++];
	idx = 0;
	while (s2[idx])
		join[idx_join++] = s2[idx++];
	join[idx_join] = '\0';
	return (join);
}
