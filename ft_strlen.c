/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:51:04 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:18:06 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calculates the length of string.

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/* remove comment to test...
int	main(void)
{
	char	str[] = "42 Porto";

	printf("Number of characters in '%s': %ld\n", str, ft_strlen(str));
}
*/
