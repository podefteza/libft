/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:29:47 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:17:25 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the integer ’n’ to the given file descriptor.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	nbr = n % 10 + 48;
	write(fd, &nbr, 1);
}
/* remove comment to test...
#include <limits.h>

int	main(void)
{
	int	fd = 1;
	ft_putnbr_fd(INT_MAX, fd);
	printf("\n");
	ft_putnbr_fd(INT_MIN, fd);
	printf("\n");
	ft_putnbr_fd(0, fd);
	printf("\n");
	ft_putnbr_fd(-42, fd);
	printf("\n");
	ft_putnbr_fd(42, fd);
	printf("\n");
	ft_putnbr_fd(-1337, fd);
	printf("\n");
	ft_putnbr_fd(1337, fd);
}*/
