/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:17:42 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/10 22:30:01 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    write(fd, "\n", 1);
}
// int main()
// {
//     char s[] = "youssef nachat";
//     ft_putendl_fd(s,1);
//     return (0);
// }