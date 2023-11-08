/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:34:27 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/08 16:37:40 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *new;
    
    if (!(new = malloc(sizeof(char ) * len + 1)))
    {
        return (NULL);
    }
     ft_strlcpy(new,&s[start],len);
       
    // while (s[start] && start < len)
    // {
    //     new[start] = s[start]; 
    //     start++;
    // }

    return (new);
}