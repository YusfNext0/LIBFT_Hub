/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:35:10 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/10 22:05:54 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    // int i;
    
    // i = 0;
    // while (s[i])
    // {
    //     ft_putchar_fd(s[i], fd);
    //     i++;
    // }
    if (s)
         write (fd, s, ft_strlen(s));
    
}

// int main()
// {
//     char s[] = "youssef nachat";
//     ft_putstr_fd(s,1);
//     return (0);
// }