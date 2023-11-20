/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 07:15:32 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/17 12:38:40 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	p = malloc((sizeof(char) * (ft_strlen(s1) + 1)));
	if (!p)
		return (0);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int main()
// {
//     char *str;
//  	char *tmp = "I malloc so I am.";
//  	str = ft_strdup(tmp);
//  	if (strcmp(str, tmp))
//  		printf("TEST_FAILED");
//     else
//  	    printf("TEST_SUCCESS");
// }
// char *ft_strdup(const char *s1)
// {
//     char    *p;
//     int i;

//     i = 0;
//     if (s1[0] == '\0')
//         return (NULL);
//    if (!(p = (char *)malloc(sizeof(char ) * ft_strlen(s1) + 1)))
//         return (NULL);
//     while (s1)
//         p[i++] = *s1++;
//     p[i] = '\0';
//     return (p);
// }