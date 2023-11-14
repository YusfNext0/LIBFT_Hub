/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:17:02 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/13 17:15:44 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char )c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if ((char )c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
/*
int	main()
{
	char *src = "teste";
		char *d1 = strchr(src, 'e');
 	char *d2 = ft_strchr(src, 'e');
	printf("original : %s \n", d1);
	printf("my function : %s", d2);
	return (0);
}*/
