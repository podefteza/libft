/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:25:23 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:16:18 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: isascii tests an integer value c to determine whether it is the
EBCDIC equivalent of a character belonging to the ASCII character set.

RETURN VALUE: isascii returns 0 if the character is not ASCII, or a nonzero
value if it is ASCII. If the argument does not have a char value, 0 is returned.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* remove comment to test...
int	main(void)
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('Z'));
	printf("%d\n", ft_isascii('6'));
	printf("%d\n", ft_isascii('$'));
	printf("%d\n", ft_isascii(-42));
	printf("%d\n", ft_isascii(33));
	printf("%d\n", ft_isascii(200));
}*/
