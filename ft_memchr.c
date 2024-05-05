/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:32:19 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:16:53 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: memchr searches n bytes, beginning at the location pointed to
by s , for the first occurrence of c .

RETURN VALUE: The return value is a pointer to the first occurence of c,
or NULL if the character cannot be found. */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while ((i < n))
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
/* remove comment to test...
int	main(void)
{
	printf("%p\n", ft_memchr("Hello, world!",'e', 1));
	printf("%p\n", ft_memchr("Hello, world!",'l', 10));
	printf("%p\n", ft_memchr("Hello, world!",'!', -42));
}*/
