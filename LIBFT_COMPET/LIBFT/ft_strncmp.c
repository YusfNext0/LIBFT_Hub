/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:40:48 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/07 05:36:15 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_strncmp(const char *s1, const char *s2, size_t n)
// {
//     size_t i;
//     unsigned char *str1 = (unsigned char*)s1;
//     unsigned char *str2 = (unsigned char*)s2;
    

//     i = 0;
//     while (i < n - 1 && str1[i])
//     {
//         if (str1[i] != str2[i])
//         {
//             return (str1[i] - str2[i]);
//         }
//         i++;
//     }
//     return (0);
// }
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    unsigned char *str1 = (unsigned char*)s1;
    unsigned char *str2 = (unsigned char*)s2;
    i = 0;
     if(n == 0)
      return (0);
    while (i < n - 1  && str1[i] && (str1[i] == str2[i]))
    {
        i++;
    }
    return (str1[i] - str2[i]);
}
