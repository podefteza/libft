/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:56:13 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:18:35 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/* remove comment to test...
int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('Z'));
	printf("%c\n", ft_toupper('0'));
	printf("%c\n", ft_toupper('&'));
}*/
