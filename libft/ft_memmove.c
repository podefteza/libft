/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:18:47 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:17:01 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION: memmove is identical to memcpy except that the copy is
guaranteed to work correctly even if the to and from objects overlap. On
completion of the call, the n bytes addressed by to are identical to the n bytes
addressed by from before the call.

RETURN VALUE: memmove returns a pointer to the to area. */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dest);
}
/* remove comment to test..
int	main(void)
{
	char dest[20] = "  42  Porto";
	ft_memmove(dest, "Hello world!", 5);
	printf("%s\n", dest);
}*/
/* The loop determines how the memory is copied: backwards of forwards,
depending on the size of dest and src*/
