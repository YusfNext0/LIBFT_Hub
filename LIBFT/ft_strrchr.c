/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:17:15 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/13 17:26:19 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char    *ft_strrchr(const char *s, int c)
// {
//     int i;
//     int index;

//     index = 0;
//     i = 0;
//     while (s[i])
//     {
//         if (s[i] == (char)c)
//             index = i;
//         i++;
//     }
//     if (s[i] == (char)c)
//         index = i;
//     if (index || s[0] == (char)c)
//         return ((char *)(s + index));
//     return (0);
// }
#include "libft.h"

char * ft_strrchr(const char *s, int c)
{
    int i;
    int index;

    index = -1;
    i = 0;
    
    while (s[i])
    {
        if (s[i] == (const char)c)
            index = i;
        i++;
    }
    if (s[i] == (const char)c)
        return (char *)(s + ft_strlen(s));
    if (index == -1)
        return (0);
    return ((char *)(s + index));
}

// int	main()
// {
// 	char *src = "thcxooere is sxox i";
// 	const char *d1 = strrchr(src, 'x');
//  	const char *d2 = ft_strrchr(src, 'x');
// 	printf("original : %s \n", d1);
// 	printf("my function : %s", d2);
// 	return (0);
// }





