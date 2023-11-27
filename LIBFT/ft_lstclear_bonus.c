/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 04:46:57 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/23 23:33:50 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list *temp;

	node = *lst;
	while (node)
	{
		temp = node;
		node = node->next;
		del(temp->content);
		free(temp);
		temp = NULL;
	}
	*lst = NULL;
}