/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:42:54 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:16:47 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/* remove comment to test...
int	main(void)
{
	printf("%d\n", ft_isprint(4));
	printf("%d\n", ft_isprint(-42));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint(32));
	printf("%d\n", ft_isprint(127));
}*/
