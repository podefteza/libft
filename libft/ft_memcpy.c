/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:47:41 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:16:59 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: memcpy copies the number of bytes specified by n from one area
of memory ( from ) to another ( to ). All bytes, including any null characters,
are copied.

RETURN VALUE: memcpy returns a pointer to the to area. */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((dest == NULL) && (src == NULL))
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/* remove comment to test..
int	main(void)
{
	char dest[20];
	ft_memcpy(dest, "Hello world!", 12);
	dest[12] = '\0';
	printf("%s\n", dest);
}*/
