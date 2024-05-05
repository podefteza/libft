/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos-j <carlos-j@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:29:26 by carlos-j          #+#    #+#             */
/*   Updated: 2024/04/25 21:17:56 by carlos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlcat() function appends the NUL-terminated string src to the end of
dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the
result. */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*append;

	append = (char *)src;
	i = 0;
	j = 0;
	while (i < size && *dst)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	while (append[j])
	{
		if (j < size - i - 1)
			*dst++ = append[j];
		j++;
	}
	*dst = 0;
	return (j + i);
}
/* remove comment to test...
int	main(void)
{
	char	dst[10] = "42 Porto";
	char	src[] = "Libft";
	unsigned int size = 20;
	printf("%s", dst);
	unsigned int result = ft_strlcat(dst, src, size);
	printf(" ---->  %s\n", dst);
	printf("Total size of the concatenated string: %u\n", result);
}*/
