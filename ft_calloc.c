/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:02:41 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:15:53 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reserves storage space for an array of num elements, each of length size
bytes. The calloc() function then gives all the bits of each element an initial
value of 0.
The calloc() function returns a pointer to the reserved space. The storage space
to which the returned value points is aligned for storage of any type of
object.*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
/* remove comment to test...
int	main(void)
{
	int	elements = 5;
	int	size = 3;
	printf("%p\n", ft_calloc(elements, size));
}*/
