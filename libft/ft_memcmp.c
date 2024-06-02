/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:22:13 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:16:56 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: memcmp compares two blocks of memory specified by ptr1 and ptr2.
The number of bytes to be compared is n . The null character is treated like any
other character and participates in the comparison, which is performed using the
standard EBCDIC collating sequence.

RETURN VALUE: memcmp returns 0 if the two blocks are equal, an integer less
than 0 if the first block is less than the second, or an integer greater than 0
if the first block is greater than the second.  */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((p1[i] == p2[i]) && (i < n - 1))
		i++;
	return (p1[i] - p2[i]);
}
/* remove comment to test...
int	main(void)
{
	char	s1[] = "42 Porto";
	char	s2[] = "42 Lisboa";
	int		n;

	n = 42;
	printf("%s vs %s = %d\n", s1, s2, ft_memcmp(s1, s2, n));
}
*/
