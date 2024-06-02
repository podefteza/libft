/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:03:06 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:16:05 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: isalnum tests an integer value to determine whether it is an
alphabetic (uppercase or lowercase) or numeric character.

RETURN VALUE: isalnum returns 0 if the character is not alphanumeric, or a
nonzero value if it is alphanumeric. If the argument is EOF , 0 is returned. */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
		return (1);
	return (0);
}
/* remove comment to test...
int	main(void)
{
	printf("%d\n", ft_isalnum('$'));
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", ft_isalnum('2'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('Y'));
	printf("%d\n", ft_isalnum('Ã'));
}*/
