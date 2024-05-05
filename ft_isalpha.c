/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 08:21:46 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:16:13 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: isalpha tests an integer value c to determine whether it is an
alphabetic (uppercase or lowercase) character. In the C locale, isalpha returns
true only for the characters for which isupper or islower is true.

RETURN VALUE: isalpha returns 0 if the character is not alphabetic, or a
nonzero value if it is alphabetic. If the argument is EOF , 0 is returned. */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/* remove comment to test...
int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('4'));
	printf("%d\n", ft_isalpha('*'));
}
*/
