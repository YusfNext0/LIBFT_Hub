/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:36:20 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/14 09:32:48 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_sstrlcat(char *dst, const char *src, size_t len)
{
	size_t i;
    
    i = 0;
	while (src[i])
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (dst);
}


char *ft_strjoin(char const *s1, char const *s2)
{
    char    *p;
    size_t  len1;
    size_t  len2;
    
    if (!s1 && !s2)
        return (0);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    p = malloc(((sizeof(char)) * (len1 + len2 + 1)));
    if (!p)
        return (0);
    len1 = ft_strlen(p);
    ft_sstrlcat(p, s1, len1);
    len1 = ft_strlen(p);
    ft_sstrlcat(p, s2, len1);
    //p = (char *)s1;
    return (p);
}

// int main()
// {
//     char    s1[] = "youssef";
//     char    s2[] = "nachat";
//     char *s = ft_strjoin(s1,s2);
//     printf("%s\n", s);
//     return (0);
// }