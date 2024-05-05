/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:59:57 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:17:05 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: memset fills a block of memory (indicated by to ) with the
specified character ( ch ). The size of the area to be filled is n .

RETURN VALUE: memset returns a pointer to the to area.  */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*output;

	output = s;
	i = 0;
	while (i < n)
	{
		output[i] = c;
		i++;
	}
	return (output);
}
/* remove comment to test...
int	main(void)
{
	char s[] = "42 Porto";
	char c = 'x';
	int n = 3;
	printf("%s\n", (char *)ft_memset(s, c, n));
}*/
