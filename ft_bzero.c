/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:07:49 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:15:48 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Sets the first n bytes of the byte area starting at s to zero.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*output;

	output = s;
	i = 0;
	while (i < n)
	{
		output[i] = 0;
		i++;
	}
}
/* remove comment to test...
int	main(void)
{
	char s[] = "42 Porto";
	int n = 3;
	int size = 0;
	int i = 0;
	while (s[size] != '\0')
		size++;
	printf("%s -> ", s);
	ft_bzero(s, n);
	while (size > 0)
	{
		printf("%c", s[i]);
		i++;
		size--;
	}
	printf("\n");
}*/
