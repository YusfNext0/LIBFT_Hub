/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:46:57 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/19 05:32:16 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list *tmp;

	node = *lst;
	while (node)
	{
		tmp = node;
		node = node->next;
		del(tmp->content);
		free(tmp);
		tmp = NULL;
	}
	*lst = NULL;
}