/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynachat <ynachat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:33:01 by ynachat           #+#    #+#             */
/*   Updated: 2023/11/17 12:20:24 by ynachat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	x;

	x = 0;
	if (n >= 0)
	{
		x = n;
	}
	else
	{
		ft_putchar_fd('-', fd);
		x = n * -1;
	}
	if (x <= 9)
	{
		ft_putchar_fd(x + 48, fd);
	}
	else
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
}
// int main()
// {
//     int fd;
//     fd = open("test.txt", O_RDWR | O_CREAT, 777);
//     ft_putnbr_fd(-5, fd);
//     return (0);
// }