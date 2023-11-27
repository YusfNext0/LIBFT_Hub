/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:58:51 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/24 00:04:26 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*l;
	void *s;

	l = NULL;
	while (lst)
	{
	s = f(lst->content);
	temp = ft_lstnew(s);
		if (!temp)
		{
			del(s);
			ft_lstclear(&l, del);
			return (NULL);
		}
		ft_lstadd_back(&l,temp);
		lst = lst->next;
	}
	return (l);
}
void del (void *d)
{
	free(d);
}
void *f(void *s)
{
	char *str = ft_strdup(s);
	size_t i = 0;
	while (i < ft_strlen(str))
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (str);
}
int main ()
{
	t_list *lst = ft_lstnew("yalah lah y3onk");
	t_list *new = ft_lstmap(lst,f,del);
	printf("%s\n",new->content);
}
