/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:55:21 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/17 09:28:21 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *p;
    int     i;

    i = 0;
    if (!s || !f)
        return (NULL);
    p = (char *)malloc(ft_strlen(s) + 1);
    if (!p)
        return (NULL);
    while (s[i])
    {
        p[i] = f(i, s[i]);
        i++;
    }
    p[i] = '\0';
    return (p);
}
// char t(unsigned int i, char s)
// {
//     return (s - 32);
// }
// int main()
// {
//     printf("%s", ft_strmapi("youssef", t));
//     return (0);
// }