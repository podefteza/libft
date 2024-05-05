/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:56:59 by carlos-j          #+#    #+#             */
/*   Updated: 2024/05/03 12:36:48 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcpy() function copies up to size - 1 characters from the
NUL-terminated string src to dst, NUL-terminating the result. */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (size != 0)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/* remove comment to test...
int	main(void)
{
	char dest[0] = "";
	const char src[] = "PortoLibft";
	size_t size = 0;

	printf("Before ft_strlcpy: %s\n", dest);
	size_t result = ft_strlcpy(dest, src, size);
	printf("After ft_strlcpy: %s\n", dest);
	printf("Size of the copied string: %zu\n", result);
	return (0);
} */
